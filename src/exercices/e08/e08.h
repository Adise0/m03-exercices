#pragma once

#include <string>

using namespace std;

namespace Exercices {
class E08 {
   public:
    static void Run();

   private:
    static bool isNumberValid(int value);

   private:
    static string getPositionName(int index);
};

}  // namespace Exercices
