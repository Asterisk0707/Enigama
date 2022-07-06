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
        cout << i + 1 << "번째 로터의 링 세팅를 입력하세요(1~26)";
        cin >> n;
        while (n - 1)
        {
           reverse_rotate(select_rotor[i]);
           rotate(encode_rotor[i]);
           n--;
        }
        rotate_flag[i] = select_rotor[i][notch[i]-1];
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
    reverse_rotate(encode_rotor[2]);
    if (select_rotor[2][0] == rotate_flag[2])                                           //다음로터 회전 식별
    {
        rotate(select_rotor[1]);
        reverse_rotate(encode_rotor[1]);
        if (select_rotor[1][0] == rotate_flag[1])
        {
            rotate(select_rotor[0]);
            reverse_rotate(encode_rotor[0]);
        }
    }
    *alpha = encode_rotor[2][int(select_rotor[2][int(*alpha) - 65]) - 65];
    cout << "rotor3:" << *alpha << "\n";
    *alpha = encode_rotor[1][int(select_rotor[1][int(*alpha) - 65]) - 65];
    cout << "rotor2:" << *alpha << "\n";
    *alpha = encode_rotor[0][int(select_rotor[0][int(*alpha) - 65]) - 65];
    cout << "rotor1:" << *alpha << "\n";
}

void Rotor::reflector_to_rotor(char* alpha)
{
    *alpha = encode_word(select_rotor[0],encode_rotor[0],*alpha);
    cout << "rotor1:" << *alpha << "\n";
    *alpha = encode_word(select_rotor[1], encode_rotor[1], *alpha);
    cout << "rotor2:" << *alpha << "\n";
    *alpha = encode_word(select_rotor[2], encode_rotor[2], *alpha);
    cout << "rotor3:" << *alpha << "\n";
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

void Rotor::reverse_rotate(char* rotor)
{
    for (int i = 25; i > 0; i--)
    {
        char temp;
        temp = rotor[i];
        rotor[i] = rotor[i - 1];
        rotor[i - 1] = temp;
    }
}

char Rotor::encode_word(char* rotor, char* encode_rotor, char alpha)
{
    for (int i = 0; i < 27; i++)
    {
        if (encode_rotor[i] == alpha)
        {
            for (int j = 0; j < 27; j++)
            {
                if (rotor[j] == char(65 + i))
                {
                   return alpha = char(65 + j);
                }
            }
        }
    }
}