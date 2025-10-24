#include "e21.h"

#include <algorithm>
#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E21::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 21) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 21:");
    Console::Space();

    Console::WriteLine("Enter a word");
    string input = Console::Ask(isAuto, "danidevedinad");
    string start, end;
    if (input.length() % 2 != 0) input.erase(input.length() / 2, 1);

    start = "" + input.substr(0, input.length() / 2);
    end = "" + input.substr(input.length() / 2, input.length());

    string reversedEnd(end.rbegin(), end.rend());

    Console::Space();
    Console::WriteLine("Your word \"" + input + " as " + start + " " + end + "\" is " +
                       (start == reversedEnd ? "" : "NOT ") + "a palindrome");

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
