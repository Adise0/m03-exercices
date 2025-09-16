#include <iostream>

#include "utils/conosole/console.h"
#include "exercices/exercises.h"
#include "utils/args/args.h"
#include "main.h"


using namespace Utils;
using namespace Exercices;

Args::ExecType execType;
int onlyExercise;


int main(int argsCount, char* args[])
{
  try{
    Console::WriteLine("Running exercices...");

    execType = Args::ParseArgs(argsCount,args, onlyExercise);

    E01::Run();
    E02::Run();
    E03::Run();

    Console::WriteLine("Done!");
    return 0;
  
  } catch (const std::exception& ex) {
    Console::WriteLine(std::string("Exception: ") + ex.what());
  }

}


