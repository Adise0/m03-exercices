#include "e10.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E10::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 10) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 10:");
    Console::Space();

    string response;

    do {
        Console::WriteLine("Can I stop?");
        Console::Write("(y/n): ");
        response = Console::Ask(isAuto, "y");
    } while (response != "y");

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
