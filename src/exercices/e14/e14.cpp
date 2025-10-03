#include "e14.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E14::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 14) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 14:");
    Console::Space();

    Console::WriteLine("Input a square size:");
    int size = stoi(Console::Ask(isAuto, to_string(4)));
    Console::Space();

    for (size_t i = 0; i < size; i++) {
        for (size_t k = 0; k < size; k++) {
            Console::Write(" ## ");
        }
        Console::WriteLine("");
    }

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
