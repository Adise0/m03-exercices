#include "e24.h"

#include <iostream>
#include <vector>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E24::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 24) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 24:");
    Console::Space();

    vector<int> testVect = vector<int>{1, 2, 3, 4};
    testVect.push_back(5);
    testVect.insert(testVect.begin(), 6);
    testVect.emplace(testVect.begin(), 7);
    // testVect.pop_back();

    for (int numb : testVect) {
        Console::WriteLine(to_string(numb));
    }

    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
