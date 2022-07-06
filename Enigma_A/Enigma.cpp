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
		

		cout << "��ȣȭ �� ���� �빮�ڸ� �Է��ϼ���. 0:����:";
		cin >> alpha;

		if (alpha == '0') break;

		plugboard.keyboard_to_plug(&alpha);
		//cout << alpha << "\n";
		rotor.plug_to_rotor(&alpha);
		//cout << alpha << "\n";
		reflector.rotor_to_ukwb(&alpha);
		//cout << alpha << "\n";
		rotor.reflector_to_rotor(&alpha);
		//cout << alpha << "\n";
		plugboard.keyboard_to_plug(&alpha);

		cout << alpha << "\n";

	} while (alpha != '0');

	cout << "���α׷� ����";
}