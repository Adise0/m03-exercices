#pragma once
#include <string>

using namespace std;

namespace Utils {
    class Console {
    public:
        static void WriteLine(string msg);
        
        public:
        static void Write(string msg);

        public:
        static void Space();

        public:
        static void Separator();

        public:
        static string Ask();
      };
}
