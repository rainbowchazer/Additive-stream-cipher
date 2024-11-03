#include <iostream>
#include "key.h"
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	srand(time(nullptr));
	int offset = 65;
	char option;
	randomForKey();
	std::cout << "\t\tЛабораторная работа №2" << std::endl;
	for (int i = 0; i < offset; i++) std::cout << "-";
	std::cout << std::endl;
	std::cout << "Используем систему омофонов для зашифровки сообщения." << std::endl;
	do
	{
		std::cout << "1. Зашифровать заранее введенные сообщения (введите '1')." << std::endl
			<< "2. Ввести сообщение для зашифровки самостоятельно (введите '2')." << std::endl
			<< "3. Выход из программы (введите '0')" << std::endl
			<< "Ввод: ";
		std::cin >> option;
		for (int i = 0; i < offset; i++) std::cout << "-";
		std::cout << std::endl;
		switch (option)
		{
		case '1':
		{
			cout << "Сообщение, которое мы вводим: " << mes1 << std::endl;
			std::string decr = encrypt(mes1);
			cout << "Его вид в зашифрованной форме: " << decr << std::endl;
			cout << "Расшифрованное сообщение: " << encrypt(decr) << std::endl << std::endl;
			cout << "Сообщение, которое мы вводим: " << mes2 << std::endl;
			std::string decr1 = encrypt(mes2);
			cout << "Его вид в зашифрованной форме: " << decr1 << std::endl;
			cout << "Расшифрованное сообщение: " << encrypt(decr1) << std::endl;
			system("pause");
			std::cout << std::endl;
			break;
		}
		case '2':
		{
				cout << "Введите сообщение: ";
				std::cin.ignore();
				std::getline(std::cin, mes3);
				cout << "Сообщение, которое мы вводим: " << mes3 << std::endl;
				std::string decr = encrypt(mes3);
				cout << "Его вид в зашифрованной форме: " << decr << std::endl;
				cout << "Расшифрованное сообщение: " << encrypt(decr) << std::endl;
				system("pause");
				std::cout << std::endl;
				break;
		}
		case '0':
		{
			system("pause");
			break;
		}
		default:
			std::cout << "Некорректный ввод, попробуйте ещё раз!" << std::endl;
			std::cout << std::endl;
			system("pause");
			std::cout << std::endl;
			break;
		}
	} while (option != '0');
	return 0;
}