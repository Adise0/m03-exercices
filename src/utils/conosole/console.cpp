#include <iostream>
#include "console.h"

using namespace std;

namespace Utils {
      void Console::WriteLine(std::string msg) {
        std::cout << msg << std::endl;
    }

    void Console::Write(std::string msg) {
        std::cout << msg;
    }

    void Console::Space() {
        std::cout << std::endl;
    }

    void Console::Separator() {
        std::cout << "----------------------------------------" << std::endl;
    }

    string Console::Ask() {
        string input;
        std::cin >> input;
        return input;
    }
}
