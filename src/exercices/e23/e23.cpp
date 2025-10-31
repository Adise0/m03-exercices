#include "e23.h"

#include <iostream>
#include <queue>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E23::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 23) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 23:");
    Console::Space();

    string input;
    queue<string> phraseQueue;
    int i = 3;
    while (true) {
        input = Console::Ask(isAuto, i <= 0 ? "-1" : ("asd" + to_string(i)));
        i--;
        if (input == "-1") break;
        phraseQueue.push(input);
    }

    Console::Space();
    Console::WriteLine("Your phrase was");

    while (!phraseQueue.empty()) {
        Console::Write(phraseQueue.front() + " ");
        phraseQueue.pop();
    }

    Console::Space();
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
