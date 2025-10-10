#include "e17.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E17::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 17) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 17:");
    Console::Space();

    int numbers[5];
    int numbersUnsorted[5];
    Console::WriteLine("Input 5 numbers:");
    for (size_t i = 0; i < 5; i++) {
        int num = stoi(Console::Ask(isAuto, to_string(5 - i)));
        numbers[i] = num;
        numbersUnsorted[i] = num;
    }

    bool isSorted = false;
    while (!isSorted) {
        bool wasUnsorted = false;
        for (size_t i = 0; i < 4; i++) {
            int a = numbers[i];
            int b = numbers[i + 1];

            if (a > b) {
                wasUnsorted = true;
                numbers[i] = b;
                numbers[i + 1] = a;
            }
        }
        isSorted = !wasUnsorted;
    }

    Console::WriteLine("Unsorted:");
    for (size_t i = 0; i < 5; i++) {
        Console::Write(to_string(numbersUnsorted[i]) + (i == 4 ? "" : ", "));
    }
    Console::Space();
    Console::WriteLine("Sorted:");
    for (size_t i = 0; i < 5; i++) {
        Console::Write(to_string(numbers[i]) + (i == 4 ? "" : ", "));
    }

    Console::Space();
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
