#include "e07.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E07::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 07) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 07:");
    Console::Space();

    Console::WriteLine("Hello, World!");
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
