#include "e12.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E12::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 12) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 12:");
    Console::Space();

    int rnd = 1 + rand() % 10;
    int inputedNum;
    int attempts = 1;

    while (true) {
        rnd = 1 + rand() % 10;
        Console::WriteLine("Input a number from 1-10: (rnd is -> " + to_string(rnd) + ")");
        inputedNum = stoi(Console::Ask(isAuto, "8"));

        if (rnd == inputedNum) break;

        attempts++;
    }

    Console::WriteLine("Correct! Guessed in " + to_string(attempts) + " attempts");
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
