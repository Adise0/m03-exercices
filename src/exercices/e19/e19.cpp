#include "e19.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E19::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 19) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 19:");
    Console::Space();

    Console::Write("Name: ");
    string name = Console::Ask(isAuto, "Pau");
    Console::Write("Middle name: ");
    string moddleName = Console::Ask(isAuto, "Ibanez");
    Console::Write("Last name: ");
    string lastName = Console::Ask(isAuto, "Gonzalez");

    Console::Space();
    Console::WriteLine("Your name is:");
    Console::WriteLine(moddleName + " " + lastName + ", " + name);
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
