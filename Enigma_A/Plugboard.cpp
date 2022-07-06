#include <iostream>
#include "Plugboard.h"
#include <string>
using namespace std;


void PlugBoard::set_plugboard()
{
    int n;                                  //������ �÷��� ���� �޴� ������ ����
    cout << "������ �÷��� ���� �Է�:";
    cin >> n;

    while (n > 0)
    {
        char a, b;                          //������ ���ڸ� �޴� ���� ����  a to b
        char temp;                          //��ġ ����� ����
        cout << "������ ���ڸ� ������ �ΰ� �Է� ���ּ���:";
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