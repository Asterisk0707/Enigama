#ifndef __ROTOR_H__
#define __ROTOR_H__

class Rotor
{
private:
    char rotor[8][27] = { {"EKMFLGDQVZNTOWYHXUSPAIBRCJ"},   //��  ����
                    {"AJDKSIRUXBLHWTMCQGZNPYFVOE"},   //��  ����
                    {"BDFHJLCPRTXVZNYEIWGAKMUSQO"},   //��  ����
                    {"ESOVPZJAYQUIRHXLNFTGKDCMWB"},   //��  ����
                    {"VZBRGITYUPSDNHLXAWMJQOFECK"},   //��  ����   
                    {"JPGVOUMFYQBENHZRDKASXLICTW"},   //��  ����
                    {"NZJHGRCXMYSWBOUFAIVLPEKQDT"},   //��  ����
                    {"FKQHTLXOCBJSPDZRAMEWNIUYGV"} };   //��  ����

    char select_rotor[3][27] = { {"0"},{"0"},{"0"} };      //���õ� ����

    char rotate_flag[3] = {};                         //ȸ���� ȸ�� ������

public:
    void select_rotate();
    void select_rotate_flag();
    void set_first_rotor_position();
    void plug_to_rotor(char* alpha);
    void reflector_to_rotor(char* alpha);
    void rotate(char* rotor);

};
#endif