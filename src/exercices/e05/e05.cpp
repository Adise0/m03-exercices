#include "e05.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E05::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 05) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 05:");
    Console::Space();

    Console::WriteLine("What's your name?");
    string inputedName = Console::Ask(isAuto, "Pau");
    Console::Space();

    Console::WriteLine("What's your age?");
    string inputedAge = Console::Ask(isAuto, "23");
    Console::Space();

    Console::WriteLine("What's your street called?");
    string inputedStreet = Console::Ask(isAuto, "Diagonal");
    Console::Space();

    Console::WriteLine("What's your street number?");
    string inputedNumber = Console::Ask(isAuto, "123");
    Console::Space();

    Console::WriteLine("============ \n Your data \n============");

    Console::Space();

    Console::WriteLine("Your name is: " + inputedName);
    Console::WriteLine("Your age is: " + inputedAge);
    Console::WriteLine("You live at: " + inputedStreet + " " + inputedNumber);

    Console::Space();
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
