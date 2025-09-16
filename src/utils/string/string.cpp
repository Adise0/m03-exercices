#include "string.h" 
#include <iostream>
#include <vector>

using namespace std;

namespace Utils {
  
  string* String::Split(string str, char delimiter, int& outCount) {
    vector<string> elements;
    string remaining = str;


    while (remaining.find(delimiter) != string::npos) {
      string item = remaining.substr(0, remaining.find(delimiter));
      elements.push_back(item);
      remaining = remaining.substr(remaining.find(delimiter) + 1, remaining.length());
    }

    remaining = remaining.substr(remaining.find(delimiter) + 1, remaining.length());
     elements.push_back(remaining);

    outCount = (int)(elements.size());

    if(outCount == 0) {
      return new string[1]{str};
    }

    string* arr = new string[elements.size()];
    for (size_t i = 0; i < elements.size(); i++) {
        arr[i] = elements[i];
    }
    return arr;
  }
      
}
