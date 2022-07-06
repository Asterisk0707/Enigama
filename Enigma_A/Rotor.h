#ifndef __ROTOR_H__
#define __ROTOR_H__

class Rotor
{
private:
    char rotor[8][27] = { {"EKMFLGDQVZNTOWYHXUSPAIBRCJ"},   //Ⅰ  로터
                    {"AJDKSIRUXBLHWTMCQGZNPYFVOE"},   //Ⅱ  로터
                    {"BDFHJLCPRTXVZNYEIWGAKMUSQO"},   //Ⅲ  로터
                    {"ESOVPZJAYQUIRHXLNFTGKDCMWB"},   //Ⅳ  로터
                    {"VZBRGITYUPSDNHLXAWMJQOFECK"},   //Ⅴ  로터   
                    {"JPGVOUMFYQBENHZRDKASXLICTW"},   //Ⅵ  로터
                    {"NZJHGRCXMYSWBOUFAIVLPEKQDT"},   //Ⅶ  로터
                    {"FKQHTLXOCBJSPDZRAMEWNIUYGV"} };   //Ⅷ  로터

    char select_rotor[3][27] = { {"0"},{"0"},{"0"} };      //선택된 로터

    char rotate_flag[3] = {};                               //회전자 회전 기준자

    int notch[8] = {18, 6, 23, 11, 1, 14, 14, 14};          //회전자 notch

    char encode_rotor[3][27] = {{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
                                {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
                                {"BCDEFGHIJKLMNOPQRSTUVWXYZA"}};

public:
    void select_rotate();
    void select_rotate_flag();
    void set_first_rotor_position();
    void plug_to_rotor(char* alpha);
    void reflector_to_rotor(char* alpha);
    void rotate(char* rotor);
    void reverse_rotate(char* rotor);
    char encode_word(char* rotor, char* encode_rotor, char alpha);

};
#endif