#include <iostream>
#include "Reflector.h"
#include <string>
using namespace std;

void Reflector::rotor_to_ukwb(char* alpha)
{
    *alpha = ukwb[int(*alpha) - 65];// ��ȣ�� ���÷��Ϳ� ����� ���ĺ����� ��ȯ
    cout << "reflector:" << *alpha << "\n";
}