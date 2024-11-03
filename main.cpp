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
	std::cout << "\t\t������������ ������ �2" << std::endl;
	for (int i = 0; i < offset; i++) std::cout << "-";
	std::cout << std::endl;
	std::cout << "���������� ������� �������� ��� ���������� ���������." << std::endl;
	do
	{
		std::cout << "1. ����������� ������� ��������� ��������� (������� '1')." << std::endl
			<< "2. ������ ��������� ��� ���������� �������������� (������� '2')." << std::endl
			<< "3. ����� �� ��������� (������� '0')" << std::endl
			<< "����: ";
		std::cin >> option;
		for (int i = 0; i < offset; i++) std::cout << "-";
		std::cout << std::endl;
		switch (option)
		{
		case '1':
		{
			cout << "���������, ������� �� ������: " << mes1 << std::endl;
			std::string decr = encrypt(mes1);
			cout << "��� ��� � ������������� �����: " << decr << std::endl;
			cout << "�������������� ���������: " << encrypt(decr) << std::endl << std::endl;
			cout << "���������, ������� �� ������: " << mes2 << std::endl;
			std::string decr1 = encrypt(mes2);
			cout << "��� ��� � ������������� �����: " << decr1 << std::endl;
			cout << "�������������� ���������: " << encrypt(decr1) << std::endl;
			system("pause");
			std::cout << std::endl;
			break;
		}
		case '2':
		{
				cout << "������� ���������: ";
				std::cin.ignore();
				std::getline(std::cin, mes3);
				cout << "���������, ������� �� ������: " << mes3 << std::endl;
				std::string decr = encrypt(mes3);
				cout << "��� ��� � ������������� �����: " << decr << std::endl;
				cout << "�������������� ���������: " << encrypt(decr) << std::endl;
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
			std::cout << "������������ ����, ���������� ��� ���!" << std::endl;
			std::cout << std::endl;
			system("pause");
			std::cout << std::endl;
			break;
		}
	} while (option != '0');
	return 0;
}