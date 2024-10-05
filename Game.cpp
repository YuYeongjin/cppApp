#include "Game.h"
#include <iostream>

Game::Game() {
    srand(static_cast<unsigned>(time(0)));
    secretNumber = rand() % 100 + 1;
    running = true;
}
void Game::start() {
    std::cout << "Starting the game!\n" ;
    play();
}

void Game::play() {
    int userInput;
    while (running) {
        std::cout << "1부터 100까지의 숫자를 입력하세요.\n"; 
        std::cin >> userInput;

        if (userInput == secretNumber) {
            std::cout << "정답입니다. 고생했어요.";
            end();;
        }
        else if (userInput > secretNumber) {
            std::cout << "더 작은 수를 입력해보세요.";
        }
        else {
            std::cout << "더 큰 수를 입력해보세요.";
        }
    }
}


void Game::end() {
    std::cout << "Thanks Playing!\n";
    running = false;
}
