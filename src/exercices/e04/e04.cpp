#include "e04.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {

void E04::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 04) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 04:");
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
    Console::Space();

    Console::WriteLine(inputedName + " " + inputedAge + " " + inputedStreet + " " + inputedNumber);

    Console::Space();
    Console::Separator();
    Console::Space();
}

}  // namespace Exercices
