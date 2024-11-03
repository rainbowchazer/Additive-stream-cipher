#pragma once
#include <string>

char key[100];                                                      //������ ��� �����


std::string mes1 = "������������� ��������������� ����������� �����������";
std::string mes2 = "��������� ��������� ����������";
std::string mes3;


void randomForKey() {                                               //��������� ��������� ����� ��� �����
    srand(static_cast<unsigned int>(time(nullptr)));                //��������� seed ��� ���������� ��������� �����

    for (int i = 0; i < 100; i++) {
        int num;
        num = rand() % 10;                                          //��������� ���������� ����� �� 0 �� 9
        key[i] = num;
    }
}


std::string encrypt(std::string mes) {                              //������� ����������
    std::string encrypt;                                            //������������� ������
    std::string key1 = "";                                          //������ �����
    for (int i = 0; i < 32; i++) {                                  //������ ����� � ������
        key1 += key[i];
    }
    int count = 0;                                                  //������� ��� ������������ ����� �����
    for (int i = 0; i < mes.size(); i++)   
    {
        if (count == key1.size())                                   //��� ���������� ���������� ������� � �����
        {
            count = 0;
        }
        encrypt += mes[i] ^ key1[count];                            //�������� XOR ��� �������� ��������� ��������� � �����
        count++;

    }
    return encrypt;   
}


