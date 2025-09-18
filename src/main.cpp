#include "main.h"

#include "utils/args/args.h"
#include "utils/conosole/console.h"

using namespace Utils;
using namespace std;

Args::ExecType execType;
int onlyExercise;

int main(int argsCount, char* args[]) {
    try {
        Console::WriteLine("Running exercices...");

        execType = Args::ParseArgs(argsCount, args, onlyExercise);

        for (auto& run : GetExercises()) {
            run();
        }

        Console::WriteLine("Done!");
        return 0;

    } catch (const std::exception& ex) {
        Console::WriteLine(std::string("Exception: ") + ex.what());
    }
}
