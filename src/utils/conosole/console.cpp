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
}
