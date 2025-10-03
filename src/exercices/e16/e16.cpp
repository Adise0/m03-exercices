#include "e16.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E16::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 16) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 16:");
    Console::Space();

    Console::WriteLine("Input a size:");
    int size = stoi(Console::Ask(isAuto, to_string(5))) + 1;
    Console::Space();

    for (size_t i = 0; i < size; i++) {
        int spaces = size - (i / 2) - 1;
        for (size_t j = 0; j < spaces; j++) {
            if (j != spaces - 1)
                Console::Write("    ");
            else if (i % 2 == 0)
                Console::Write("    ");
            else
                Console::Write("  ");
        }
        for (size_t k = 0; k < i; k++) {
            Console::Write(" ## ");
        }
        Console::WriteLine("");
    }

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
