#include "e20.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

namespace Exercices {
void E20::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 20) {
        return;
    }

    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 20:");
    Console::Space();

    Console::WriteLine("Input a phrase:");
    string phrase = Console::Ask(
        isAuto,
        "Lorem ipsum dolor sit amet consectetur adipiscing elit. Quisque faucibus ex sapien vitae "
        "pellentesque sem placerat. In id cursus mi pretium tellus duis convallis. Tempus leo eu "
        "aenean sed diam urna tempor. Pulvinar vivamus fringilla lacus nec metus bibendum egestas. "
        "Iaculis massa nisl malesuada lacinia integer nunc posuere. Ut hendrerit semper vel class "
        "aptent taciti sociosqu. Ad litora torquent per conubia nostra inceptos himenaeos.");

    Console::Space();

    int charaterCounts[255] = {0};

    for (size_t i = 0; i < phrase.length(); i++) {
        char c = phrase[i];
        int index = c;
        charaterCounts[index]++;
    }

    int mostRepeatedCharIndex = 0;
    int mostRepeatedLetterIndex = 0;
    for (size_t i = 0; i < 255; i++) {
        if (charaterCounts[i] > charaterCounts[mostRepeatedCharIndex]) {
            mostRepeatedCharIndex = i;
        }
        if ((i < 'a' || i > 'z') && (i < 'A' || i > 'Z')) continue;  // Not counting uppercase

        if (charaterCounts[i] > charaterCounts[mostRepeatedLetterIndex]) {
            mostRepeatedLetterIndex = i;
        }
    }

    Console::Space();
    Console::WriteLine(to_string(mostRepeatedCharIndex) + " " + to_string(mostRepeatedLetterIndex));

    Console::WriteLine("Most repeated character: \"" + string(1, (char)(mostRepeatedCharIndex)) +
                       "\"");
    Console::WriteLine("Most repeated letter: \"" + string(1, (char)(mostRepeatedLetterIndex)) +
                       "\"");
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
