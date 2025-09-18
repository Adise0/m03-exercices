#include "e03.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E03::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 03) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 03:");
    Console::Space();

    Console::WriteLine("What's your name?");

    string inputedName = Console::Ask(isAuto, "Pau");

    Console::Space();
    Console::WriteLine("Hello, " + inputedName + "!");
    Console::Space();
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
