#include "e27.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E27::Run() {
  if (execType == Args::ExecType::Only && onlyExercise != 27) {
    return;
  }

  bool isAuto = execType == Args::ExecType::Auto;

  Console::Space();
  Console::Separator();
  Console::WriteLine("Exercise 27:");
  Console::Space();

  int testNum = 0;
  int* testNumPointer = &testNum;
  int* testNumPointer2 = testNumPointer;

  *testNumPointer2 = 3;

  Console::WriteLine(to_string(testNum) + " - " + to_string(*testNumPointer) + " - " +
                     to_string(*testNumPointer2));
  Console::Separator();
  Console::Space();
}
}  // namespace Exercices
