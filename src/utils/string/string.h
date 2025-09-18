#pragma once
#include <string>

using namespace std;
namespace Utils {
class String {
   public:
    static string* Split(string str, char delimiter, int& outCount);

   public:
    static string RemoveTrail(string str);

   public:
    static string RemoveTrail(float value);

   private:
    static string RemovetrailInternal(string str);
};

}  // namespace Utils
