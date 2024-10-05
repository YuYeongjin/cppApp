#pragma once

#define GAME_H

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
class Game {
public:
    Game();
    void start();
    void play();
    void end();
private:
    bool running;
    int secretNumber;
};