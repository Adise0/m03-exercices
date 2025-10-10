#include "e18.h"

#include <iostream>

#include "../../main.h"
#include "../../utils/conosole/console.h"

using namespace Utils;
using namespace std;

#define DUNGEON_SIZE 11
#define EMPTY 0
#define WALL 1
#define DUDE 2
#define TRESURE 2

#define EMPTY_SPRITE "  "
#define WALL_SPRITE "##"
#define DUDE_SPRITE "P "
#define TRESURE_SPRITE "C "

namespace Exercices {
void E18::Run() {
    if (execType == Args::ExecType::Only && onlyExercise != 18) {
        return;
    }

    srand(time(0));
    bool isAuto = execType == Args::ExecType::Auto;

    Console::Space();
    Console::Separator();
    Console::WriteLine("Exercise 18:");
    Console::Space();

    bool isPlaying = true;
    int dungeon[DUNGEON_SIZE][DUNGEON_SIZE];
    int dudePos[2] = {DUNGEON_SIZE / 2, DUNGEON_SIZE / 2};

    int tresurePos[2];

    do {
        tresurePos[0] = 1 + rand() % (DUNGEON_SIZE - 2);
        tresurePos[1] = 1 + rand() % (DUNGEON_SIZE - 2);
    } while (tresurePos[0] == dudePos[0] && tresurePos[1] == dudePos[1]);

    for (size_t i = 0; i < DUNGEON_SIZE; i++) {
        for (size_t j = 0; j < DUNGEON_SIZE; j++) {
            if (((i == 0 || i == DUNGEON_SIZE - 1) || (j == 0 || j == DUNGEON_SIZE - 1)))
                dungeon[i][j] = WALL;
            else
                dungeon[i][j] = EMPTY;
        }
    }

    while (isPlaying) {
        for (size_t i = 0; i < DUNGEON_SIZE; i++) {
            for (size_t j = 0; j < DUNGEON_SIZE; j++) {
                int celState = dungeon[i][j];

                if (dudePos[0] == i && dudePos[1] == j) {
                    Console::Write(DUDE_SPRITE);
                    continue;
                }

                if (tresurePos[0] == i && tresurePos[1] == j) {
                    Console::Write(TRESURE_SPRITE);
                    continue;
                }

                string sprite;
                switch (celState) {
                    case WALL:
                        sprite = WALL_SPRITE;
                        break;

                    default:
                        sprite = EMPTY_SPRITE;
                        break;
                }
                Console::Write(sprite);
            }
            Console::Space();
        }

        char action = tolower((Console::Ask(false))[0]);

        switch (action) {
            case 'a':
                if (dudePos[1] == 1) break;
                dudePos[1] = dudePos[1] - 1;
                break;
            case 'd':
                if (dudePos[0] == DUNGEON_SIZE - 2) break;
                dudePos[1] = dudePos[1] + 1;
                break;
            case 'w':
                if (dudePos[0] == 1) break;
                dudePos[0] = dudePos[0] - 1;
                break;
            case 's':
                if (dudePos[1] == DUNGEON_SIZE - 2) break;
                dudePos[0] = dudePos[0] + 1;
                break;

            default:
                break;
        }

        if (dudePos[0] == tresurePos[0] && dudePos[1] == tresurePos[1]) {
            break;
        }

        system("cls");
    }
    Console::Space();
    Console::Separator();
    Console::Space();
    Console::WriteLine("You won!");
    Console::Space();
    Console::Separator();
    Console::Space();
}
}  // namespace Exercices
