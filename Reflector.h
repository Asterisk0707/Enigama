#pragma once
#ifndef REFLECTOR_H
#define REFLECTOR_H
#include "Reflector.h"
//#include "enigmaletter.h"
using namespace std;

class Reflector {
private:
    char ukwb[27] = { "YRUHQSLDPXNGOKMIEBFZCWVJAT" }; //ukw.b 는 리플렉터의 종류

public:
    char alpha; //플러그보드와 로터를 한번거친 암호
    void rotor_to_ukwb(char* alpha); //암호을 리플렉터를 써서 한번더 변환
};
#endif