#include <iostream>
#include "Plugboard.h"
#include <string>
using namespace std;


void PlugBoard::set_plugboard()
{
    int n;                                  //연결할 플러그 수를 받는 정수형 변수
    cout << "연결할 플러그 개수 입력:";
    cin >> n;

    while (n > 0)
    {
        char a, b;                          //연결할 문자를 받는 문자 변수  a to b
        char temp;                          //위치 변경용 변수
        cout << "연결할 문자를 공백을 두고 입력 해주세요:";
        cin >> a >> b;

        temp = plug_arr[65 - int(a)];
        plug_arr[65 - int(a)] = plug_arr[65 - int(b)];
        plug_arr[65 - int(b)] = temp;
        
        n--;
    }
}

void PlugBoard::keyboard_to_plug(char* alpha)
{
    *alpha = plug_arr[int(*alpha) - 65];
    cout << "plug Board:" << *alpha << "\n";
}