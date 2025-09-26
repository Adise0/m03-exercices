#include "e12.h"

#include <time.h>

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

    srand(time(0));

    int rnd1 = 1 + rand() % 10;
    int rnd2 = 1 + rand() % 10;
    int inputedNum;
    int attempts = 1;

    while (true) {
        Console::WriteLine("Input a number: (rnd is -> " + to_string(rnd1) + " * " +
                           to_string(rnd2) + "=" + to_string(rnd1 * rnd2) + ")");

        inputedNum = stoi(Console::Ask(isAuto, to_string(rnd1 * rnd2)));

        if (rnd1 * rnd2 == inputedNum) break;

        attempts++;
    }

    Console::WriteLine("Correct! Guessed in " + to_string(attempts) + " attempts");
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
