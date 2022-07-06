#include <iostream>
#include "Reflector.h"
#include <string>
using namespace std;

void Reflector::rotor_to_ukwb(char* alpha)
{
    *alpha = ukwb[int(*alpha) - 65];// 암호을 리플렉터에 저장된 알파벳으로 변환
    cout << "reflector:" << *alpha << "\n";
}