#pragma once

#include <string>
using namespace std;
namespace Utils { 
    class Args {
      public:
        enum ExecType {
            All,
            Only,
            Last,
            Auto
        };

      public:
        static ExecType ParseArgs(int argsCount, char* args[], int& outOnlyExNumber);
      };
}
