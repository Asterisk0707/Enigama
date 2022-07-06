#include<iostream>
#include<string.h>
#include "Rotor.h"
using namespace std;

void Rotor::select_rotate()
{
    cout << "선택 할 로터 3개를 순서대로 입력:";

    for (int i = 0; i < 3; i++)
    {
        int n = 0;
        cin >> n;
        strcpy_s(select_rotor[i], rotor[n - 1]);
    }
}

void Rotor::select_rotate_flag()
{
    int n = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << "번째 로터의 회전 식별자를 입력하세요(1~26)";
        cin >> n;
        rotate_flag[i] = select_rotor[i][n - 1];
    }
}

void Rotor::set_first_rotor_position()
{
    int n = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << "번째 로터의 초기위치를 입력하세요(1~26)";
        cin >> n;

        while (n-1)
        {
            rotate(select_rotor[i]);
            n--;
        }

    }
}

void Rotor::plug_to_rotor(char* alpha)
{
    rotate(select_rotor[2]);
    if (select_rotor[2][0] == rotate_flag[2])
    {
        rotate(select_rotor[1]);
        if (select_rotor[1][0] == rotate_flag[1]) rotate(select_rotor[0]);
    }
    *alpha = select_rotor[2][int(*alpha) - 65];
    cout << "roto3:" << *alpha;
    *alpha = select_rotor[1][int(*alpha) - 65];
    cout << "roto2:" << *alpha;
    *alpha = select_rotor[0][int(*alpha) - 65];
    cout << "roto1:" << *alpha;
}

void Rotor::reflector_to_rotor(char* alpha)
{
    *alpha = select_rotor[0][int(*alpha) - 65];
    cout << "roto1:" << *alpha;
    *alpha = select_rotor[1][int(*alpha) - 65];
    cout << "roto2:" << *alpha;
    *alpha = select_rotor[2][int(*alpha) - 65];
    cout << "roto3:" << *alpha;
}

void Rotor::rotate(char* rotor)
{
    for (int i = 0; i < 25; i++)
    {
        char temp;
        temp = rotor[i];
        rotor[i] = rotor[i + 1];
        rotor[i + 1] = temp;
    }
}