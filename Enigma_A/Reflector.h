#pragma once
#ifndef REFLECTOR_H
#define REFLECTOR_H
#include "Reflector.h"
//#include "enigmaletter.h"
using namespace std;

class Reflector {
private:
    char ukwb[27] = { "YRUHQSLDPXNGOKMIEBFZCWVJAT" }; //ukw.b �� ���÷����� ����

public:
    char alpha; //�÷��׺���� ���͸� �ѹ���ģ ��ȣ
    void rotor_to_ukwb(char* alpha); //��ȣ�� ���÷��͸� �Ἥ �ѹ��� ��ȯ
};
#endif