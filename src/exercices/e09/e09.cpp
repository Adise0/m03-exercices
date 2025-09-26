#include "e09.h"

#include <array>
#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E09::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 9) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 09:");
    Console::Space();

    Console::WriteLine("Input a letter");

    char letter = tolower(Console::Ask(isAuto, "a")[0]);
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    auto found = find(begin(vowels), end(vowels), letter);
    bool present = (found != std::end(vowels));

    switch (present) {
        case true:
            Console::WriteLine("Is vowel");
            break;

        default:
            Console::WriteLine("Is NOT vowel");

            break;
    }

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
