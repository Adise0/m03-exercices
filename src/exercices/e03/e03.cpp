#include <iostream>
#include "e03.h"
#include "../../utils/conosole/console.h"
#include "../../main.h"


using namespace Utils;
using namespace std;

namespace Exercices {
    void E03::Run() {
        if(execType == Args::ExecType::Only && onlyExercise != 03) {
          return;
        }

        Console::Space();
        Console::Separator();
        Console::WriteLine("Exercise 03:");
        Console::Space();


        Console::WriteLine("What's your name?");
        string inputedName = "Pau";

        
        if(execType == Args::ExecType::Auto) {
          Console::WriteLine(inputedName + " <-- AUTO");
        } else 
        {
           inputedName = Console::Ask();
        }
        


        Console::Space();
        Console::WriteLine("Hello, " + inputedName + "!");
        Console::Space();
        Console::Separator();
        Console::Space();
    }
}
