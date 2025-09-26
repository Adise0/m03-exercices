#include "e11.h"

#include <iostream>
#include <vector>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E11::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 11) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 11:");
    Console::Space();

    int evenNum = 0;
    int oddNum = 0;

    while (true) {
        Console::WriteLine("Input a number");
        int newNumber = stoi(Console::Ask(isAuto, "0"));

        if (newNumber == 0) break;

        if (newNumber % 2 == 0)
            evenNum += newNumber;
        else
            oddNum += newNumber;
    }

    Console::WriteLine("Even sum is: " + to_string(evenNum));
    Console::WriteLine("Odd sum is: " + to_string(oddNum));

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
