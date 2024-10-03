// cppApp.cpp : 이 파일에는 'main' 함수가 포함됩니다.
//
#include "Game.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
  
    Game game;
    game.start();
    cout << "test\n" << "yjyoo \n";
    
    int first;
    int second;
    cout << "곱셈의 첫 번째 값 :";
    cin >> first;
    cout << "두 번째 값 : ";
    cin >> second;

    cout << "곱셈 결과 입니다. ::" << first * second << "\n";

    string test;
    string value("good");
    cout << "C++ 공부하는 기분이 어떠세요?";
    
    while (test.length() ==0) {

        getline(cin, test);

        if (test.length()>0 && test == value) {
            cout << "나도 좋아.";
            break;
        }
        else {
            cout << "괜찮아 이제 시작이야.";
        }
    }
    return 0;
}

// 시작을 위한 팁:
//   1. g++ cppApp.cpp -o main
//   1. g++ cppApp.cpp src/Game.cpp -I include -o main
//   2. ./main