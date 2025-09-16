#include <iostream>
#include "e00.h"
#include "../../utils/conosole/console.h"
#include "../../main.h"

using namespace Utils;
using namespace std;

namespace Exercices {
    void E00::Run() {
        if(execType == Args::ExecType::Only && onlyExercise != 00) {
          return;
        }


        Console::Space();
        Console::Separator();
        Console::WriteLine("Exercise 00:");
        Console::Space();


        Console::WriteLine("Hello, World!");
        Console::Separator();
        Console::Space();
    }
}
