#pragma once
#include <string>


using namespace std;
namespace Utils { 
    class String {
     

      public:
        static string* Split(string str, char delimiter, int& outCount);
      };
}
