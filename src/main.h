#pragma once
#include <functional>
#include <iostream>
#include <vector>

#include "utils/args/args.h"

using namespace Utils;

extern Args::ExecType execType;
extern int onlyExercise;

using Runner = std::function<void()>;

inline std::vector<Runner>& GetExercises() {
    static std::vector<Runner> registry;
    return registry;
}

#define REGISTER_EXERCISE(CLASSNAME)                                         \
    namespace {                                                              \
    struct CLASSNAME##Registrar {                                            \
        CLASSNAME##Registrar() { GetExercises().push_back(CLASSNAME::Run); } \
    };                                                                       \
    CLASSNAME##Registrar global_##CLASSNAME##Registrar;                      \
    }