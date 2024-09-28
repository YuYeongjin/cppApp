// cppApp.cpp : 이 파일에는 'main' 함수가 포함됩니다.
//
#include "Game.h"
#include <iostream>

int main()
{
    Game game;
    game.start();
    return 0;
}

// 시작을 위한 팁:
//   1. g++ cppApp.cpp -o main
//   1. g++ cppApp.cpp src/Game.cpp -I include -o main
//   2. ./main