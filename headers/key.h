#pragma once
#include <string>

char key[100];                                                      //массив для ключа


std::string mes1 = "нижегородский государственный технический университет";
std::string mes2 = "бочкарева анастасия алексеевна";
std::string mes3;


void randomForKey() {                                               //генерация рандомных чисел для ключа
    srand(static_cast<unsigned int>(time(nullptr)));                //установка seed для генератора случайных чисел

    for (int i = 0; i < 100; i++) {
        int num;
        num = rand() % 10;                                          //генерация случайного числа от 0 до 9
        key[i] = num;
    }
}


std::string encrypt(std::string mes) {                              //функция шифрования
    std::string encrypt;                                            //зашифрованная строка
    std::string key1 = "";                                          //строка ключа
    for (int i = 0; i < 32; i++) {                                  //запись ключа в строку
        key1 += key[i];
    }
    int count = 0;                                                  //счетчик для отслеживания длины ключа
    for (int i = 0; i < mes.size(); i++)   
    {
        if (count == key1.size())                                   //при достижении последнего символа в ключе
        {
            count = 0;
        }
        encrypt += mes[i] ^ key1[count];                            //операция XOR для символов исходного сообещния и ключа
        count++;

    }
    return encrypt;   
}


