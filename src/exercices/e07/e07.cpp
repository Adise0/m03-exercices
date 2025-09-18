#include "e07.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"
#include "../../utils/string/string.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E07::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 07) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 07:");
    Console::Space();

    Console::WriteLine("Type a number");
    float number = stof(Console::Ask(isAuto, "160"));
    Console::Space();

    Console::WriteLine(String::RemoveTrail(-number));

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
