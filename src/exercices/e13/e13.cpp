#include "e13.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"
#include "time.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E13::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 13) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 13:");
    Console::Space();

    srand(time(0));
    int rnd = rand() % 20;
    int attempts = 0;
    bool guessed = false;
    int inputedNum;
    int currentGuess = 0;

    while (attempts < 55 && !guessed) {
        Console::WriteLine("Guess a number between 0 and 20");
        inputedNum = stoi(Console::Ask(isAuto, to_string(rnd)));

        currentGuess++;
        if (inputedNum == rnd) {
            guessed = true;
            break;
        }

        if (currentGuess == 5) {
            Console::WriteLine("Your number " + to_string(inputedNum) + " is " +
                               (inputedNum > rnd ? "higher" : "lower") +
                               " than the correct number");
            currentGuess = 0;
        }
    }

    if (!guessed)
        Console::WriteLine("Bruh, number was " + to_string(rnd));
    else
        Console::WriteLine("Nice guess!");
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
