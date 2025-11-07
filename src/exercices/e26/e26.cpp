#include "e26.h"

#include <iostream>
#include <vector>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E26::Run() {
  if (execType == Args::ExecType::Only && onlyExercise != 26) {
    return;
  }

  bool isAuto = execType == Args::ExecType::Auto;

  Console::Space();
  Console::Separator();
  Console::WriteLine("Exercise 26:");
  Console::Space();

  vector<int> numbers = vector<int>();

  Console::WriteLine("Enter some numbers: (-1 to stop)");
  int i = 3;
  while (true) {
    int input = stoi(Console::Ask(isAuto, i <= 0 ? "-1" : to_string(i)));
    i--;
    if (input == -1) break;
    numbers.push_back(input);
  }

  Console::WriteLine("Insert some numbers: (-1 to cancel) ");

  int insert = 3;
  while (true) {
    Console::Write("Number to add: ");
    int numberToAdd = stoi(Console::Ask(isAuto, to_string(insert + 10)));
    if (numberToAdd == -1 || insert <= 0) break;

    Console::Write("Position: ");
    int insertPos = stoi(Console::Ask(isAuto, to_string(insert)));

    numbers.insert(numbers.begin() + (insertPos), numberToAdd);
    insert--;
  }

  Console::WriteLine("Numbers:");
  for (size_t i = 0; i < numbers.size(); i++) {
    Console::Write(to_string(numbers[i]) + " ");
  }
  Console::Space();

  Console::Separator();
  Console::Space();
}
}  // namespace Exercices
