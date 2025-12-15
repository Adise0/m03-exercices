#include "e28.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {

int GetUserInput(bool isAuto, string autoValue, string question) {
  Console::WriteLine(question);
  string input = Console::Ask(isAuto, autoValue);
  try {
    return stoi(input);

  } catch (...) {
    Console::WriteLine("Invalid number, please try again.");
    return GetUserInput(isAuto, autoValue, question);
  }
}

void E28::Run() {
  if (execType == Args::ExecType::Only && onlyExercise != 28) {
    return;
  }

  bool isAuto = execType == Args::ExecType::Auto;

  Console::Space();
  Console::Separator();
  Console::WriteLine("Exercise 28:");
  Console::Space();

  int attempts = 1;

  int maxNumber = GetUserInput(isAuto, "100", "Please enter the maximum number: ");
  int answer = isAuto ? 42 : rand() % (maxNumber + 1);

  while (true) {
    int input = GetUserInput(isAuto, "42", "Please enter a number: ");
    if (input == answer) break;

    if (input > answer) {
      Console::WriteLine("Too high!");
    } else {
      Console::WriteLine("Too low!");
    }
    attempts++;
  }
  Console::Space();
  Console::WriteLine("Congratulations! You've found the number " + to_string(answer) + " in " +
                     to_string(attempts) + " attempts.");

  Console::Separator();
  Console::Space();
}

}  // namespace Exercices
