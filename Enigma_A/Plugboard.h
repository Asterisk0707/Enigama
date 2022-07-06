#pragma once
#ifndef PLUGBOARD_H
#define PLUGBOARD_H
#include "Plugboard.h"
using namespace std;

class PlugBoard {
private:
    char plug_arr[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
public:
    char alpha;//키보드에서 받은 암호문
    void keyboard_to_plug(char* alpha); //키보드에서 플러그와 연결하는것과 동일
    void set_plugboard();               //플러그보드 세팅
};

#endif