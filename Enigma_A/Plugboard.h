#pragma once
#ifndef PLUGBOARD_H
#define PLUGBOARD_H
#include "Plugboard.h"
using namespace std;

class PlugBoard {
private:
    char plug_arr[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
public:
    char alpha;//Ű���忡�� ���� ��ȣ��
    void keyboard_to_plug(char* alpha); //Ű���忡�� �÷��׿� �����ϴ°Ͱ� ����
    void set_plugboard();               //�÷��׺��� ����
};

#endif