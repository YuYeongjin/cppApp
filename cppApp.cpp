// cppApp.cpp : 이 파일에는 'main' 함수가 포함됩니다.
//
#include "Game.h"
#include <iostream>

int main()
{
    using namespace std;
    Game game;
    game.start();
    cout << "test\n" << "yjyoo";
    
    int first;
    int second;
    cout << "첫 번째 값 :";
    cin >> first;
    cout << "두 번째 값 : ";
    cin >> second;

    cout << "곱셈 결과 입니다. ::" << first * second;
    return 0;
}

// 시작을 위한 팁:
//   1. g++ cppApp.cpp -o main
//   1. g++ cppApp.cpp src/Game.cpp -I include -o main
//   2. ./main