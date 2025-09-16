#include <iostream>
#include <filesystem>

#include "utils/conosole/console.h"
#include "exercices/exercises.h"


namespace fs = std::filesystem;
using namespace Utils;
using namespace Exercices;

void main()
{

    Console::WriteLine("Running exercices...");

    std::string path = "/exercices";

     try {
        for (const auto& entry : fs::directory_iterator(path)) {
            if (entry.is_directory()) {
                Console::WriteLine(entry.path().string());
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    E01::Run();
    E02::Run();
    E03::Run();

}


