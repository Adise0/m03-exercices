#include "e22.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E22::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 22) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 22:");
    Console::Space();

    Console::WriteLine("Input a word:");
    string word1 = Console::Ask(isAuto, "Hello");
    Console::Space();
    Console::WriteLine("Input a word:");
    string word2 = Console::Ask(isAuto, "ollHe");
    Console::Space();

    bool isSameLength = word1.length() != word2.length();

    if (!isSameLength) Console::WriteLine("This is not an anagram");

    bool isAnagram = true;
    bool found = false;
    for (size_t i = 0; i < word1.length() - 1; i++) {
        found = false;
        for (size_t j = 0; j < word1.length() - 1; j++) {
            if (word1[i] == word2[j]) {
                found = true;
            }
        }
        if (!found) {
            isAnagram = false;
            break;
        }
    }

    Console::Space();
    Console::WriteLine("These words are " + string() + (isAnagram ? "" : "NOT ") + "an anagram");

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
