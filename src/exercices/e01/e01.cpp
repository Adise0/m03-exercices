#include <iostream>
#include "e01.h"
#include "../../utils/conosole/console.h"
#include "../../main.h"

using namespace Utils;
using namespace std;

namespace Exercices {
    void E01::Run() {
        if(execType == Args::ExecType::Only && onlyExercise != 01) {
          return;
        }

        Console::Space();
        Console::Separator();
        Console::WriteLine("Exercise 01:");
        Console::Space();


        Console::WriteLine("Hello, World!");
        Console::Separator();
        Console::Space();
    }
}
