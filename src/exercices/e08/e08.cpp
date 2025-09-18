#include "e08.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E08::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 8) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 08:");
    Console::Space();

    int number;
    while (!isNumberValid(number)) {
        Console::WriteLine("Type a number with 6 digits");
        number = stoi(Console::Ask(isAuto, "563475"));
        Console::Space();

        if (isNumberValid(number)) continue;

        Console::WriteLine("Invalid number!");
        Console::Space();
    }

    string stringifiedNumber = to_string(number);

    for (int i = 0; i < stringifiedNumber.length(); i++) {
        char character = stringifiedNumber[stringifiedNumber.length() - 1 - i];
        Console::WriteLine(getPositionName(i) + " -> " + character);
    }

    Console::Separator();
    Console::Space();
}

bool E08::isNumberValid(int number) {
    if (!number) return false;
    if (to_string(number).length() != 6) return false;
    return true;
}

string E08::getPositionName(int index) {
    switch (index) {
        case 0:
            return "units";
        case 1:
            return "tens";
        case 2:
            return "hundreds";
        case 3:
            return "thousands";
        case 4:
            return "ten-thousands";
        case 5:
            return "hundred-thousands";

        default:
            throw new exception("Unknown index " + index);
    }
}
}  // namespace Exercices
