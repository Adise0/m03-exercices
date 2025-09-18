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

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 04:");
    Console::Space();

    Console::WriteLine("Hello, World!");
    Console::Separator();
    Console::Space();
}

}  // namespace Exercices
