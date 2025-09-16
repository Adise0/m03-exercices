#include <iostream>
#include "e02.h"
#include "../../utils/conosole/console.h"
#include "../../main.h"

using namespace Utils;
using namespace std;

namespace Exercices {
    void E02::Run() {
        if(execType == Args::ExecType::Only && onlyExercise != 02) {
          return;
        }

        Console::Space();
        Console::Separator();
        Console::WriteLine("Exercise 02:");
        Console::Space();


        Console::WriteLine("Text1 Text2");
        Console::Separator();
        Console::Space();
    }
}
