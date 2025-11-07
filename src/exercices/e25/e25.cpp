#include "e25.h"

#include <iostream>
#include <queue>
#include <stack>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E25::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 25) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 25:");
    Console::Space();

    queue<int> numbers = queue<int>();
    stack<int> reversedNumbers = stack<int>();
    int i = 3;
    while (true) {
        int input = stoi(Console::Ask(isAuto, i <= 0 ? "-1" : to_string(i)));
        i--;
        if (input == -1) break;
        numbers.push(input);
    }

    while (!numbers.empty()) {
        reversedNumbers.push(numbers.front());
        numbers.pop();
    }

    Console::WriteLine("Numbers:");
    while (!reversedNumbers.empty()) {
        Console::Write(to_string(reversedNumbers.top()) + " ");
        reversedNumbers.pop();
    }
    Console::Space();
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
