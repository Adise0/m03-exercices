#include "console.h"

#include <iostream>

using namespace std;

namespace Utils {
void Console::WriteLine(std::string msg) { std::cout << msg << std::endl; }

void Console::Write(std::string msg) { std::cout << msg; }

void Console::Space() { std::cout << std::endl; }

void Console::Separator() { std::cout << "----------------------------------------" << std::endl; }

string Console::Ask(bool isAuto, string defaultValue) {
    if (isAuto) {
        Console::WriteLine(defaultValue + " <-- AUTO");
        return defaultValue;
    }

    string input;
    std::cin >> input;
    return input;
}
}  // namespace Utils
