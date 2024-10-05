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
        std::cout << "1���� 100������ ���ڸ� �Է��ϼ���.\n"; 
        std::cin >> userInput;

        if (userInput == secretNumber) {
            std::cout << "�����Դϴ�. ����߾��.";
            end();;
        }
        else if (userInput > secretNumber) {
            std::cout << "�� ���� ���� �Է��غ�����.";
        }
        else {
            std::cout << "�� ū ���� �Է��غ�����.";
        }
    }
}


void Game::end() {
    std::cout << "Thanks Playing!\n";
    running = false;
}
