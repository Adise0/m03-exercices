#include "e06.h"

#include <cmath>
#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"
#include "../../utils/string/string.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E06::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 06) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 06:");
    Console::Space();

    Console::WriteLine("Type a number");
    float number1 = stof(Console::Ask(isAuto, "160"));

    Console::Space();

    Console::WriteLine("Type another number");
    float number2 = stof(Console::Ask(isAuto, "538"));
    Console::Space();

    float sum = number1 + number2;
    float sub = number1 - number2;
    float mult = number1 * number2;
    float div = number1 / number2;

    Console::WriteLine("Sum: " + String::RemoveTrail(sum));
    Console::WriteLine("Substraction: " + String::RemoveTrail(sub));
    Console::WriteLine("Multiplication: " + String::RemoveTrail(mult));
    Console::WriteLine("Division: " + String::RemoveTrail(div));

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
