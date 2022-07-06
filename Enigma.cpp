#include<iostream>
#include "Rotor.h"
#include "Plugboard.h"
#include "Reflector.h"
using namespace std;

int main()
{
	Rotor rotor = Rotor();
	PlugBoard plugboard = PlugBoard();
	Reflector reflector = Reflector();

	char alpha = '0';
	plugboard.set_plugboard();
	rotor.select_rotate();
	rotor.select_rotate_flag();
	rotor.set_first_rotor_position();

	do
	{
		
		cout << "암호화 할 영어 대문자를 입력하세요. -1:종료";
		cin >> alpha;

		if (alpha == '-1') break;
		plugboard.keyboard_to_plug(&alpha);
		rotor.plug_to_rotor(&alpha);
		reflector.rotor_to_ukwb(&alpha);
		rotor.reflector_to_rotor(&alpha);
		plugboard.keyboard_to_plug(&alpha);

		cout << alpha << "\n";

	} while (alpha != '-1');

	cout << "프로그램 종료";
}