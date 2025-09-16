#include <vector>

#include "args.h"
#include "../conosole/console.h"
#include "../string/string.h"


using namespace std;


namespace Utils {

  vector<string> acceptedArgs = { "--execType", "--ex" };


    Args::ExecType Args::ParseArgs(int argsCount, char* args[], int& outOnlyExNumber) {
      Console::Space();
        Console::Separator();
        Console::WriteLine("Parsing args...");
        Args::ExecType execType = ExecType::All;
        outOnlyExNumber = -1;

      if(argsCount <= 1) {
          return execType;
      }

        for (int i = 2; i < argsCount; i++) {
            string argString = args[i];
            
            int splitCount = 0;
            string* arg = String::Split(argString, '=',splitCount);

            string argName = splitCount > 0 ? arg[0] : argString;

            bool isArgAccepted = find(acceptedArgs.begin(), acceptedArgs.end(), argName) != acceptedArgs.end();
            if(!isArgAccepted) {
              
              Console::WriteLine(("\nArgument not recognized: " + argName).c_str());
              return execType;
            }

            // Case execType
            if(argName == acceptedArgs[0]) {
              bool hasValue = splitCount >= 1;
              if(!hasValue) {
               Console::WriteLine(("\nArgument execType requires a value. Possible values: All, Only, Last, Auto" + argName).c_str());
                return execType;
              }

              string value = arg[1];

              if(value == "All") {
                execType = ExecType::All;
              } else if(value == "Only") {
                execType = ExecType::Only;
              } else if(value == "Last") {
                execType = ExecType::Last;
              } else if(value == "Auto") {
                execType = ExecType::Auto;
              } else {
                 Console::WriteLine(("\nArgument execType has invalid value: " + value + ". Possible values: All, Only, Last, Auto").c_str());
              }
            }

            // Ex case
            if(argName == acceptedArgs[1]) {
               bool hasValue = splitCount >= 1;
              if(!hasValue) {
               Console::WriteLine(("\nArgument ex requires a value" + arg[1]).c_str());
                return execType;
              }
              outOnlyExNumber = stoi(arg[1]);
            }
        }

        if(execType == ExecType::Only && outOnlyExNumber == -1) {
         Console::WriteLine("\nArgument execType is set to Only but no exercise number is provided.");
        }
        Console::WriteLine("\nDone!");
        Console::Separator();

        return execType;
    }
}
