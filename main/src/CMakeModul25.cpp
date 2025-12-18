// CMakeModul25.cpp: определяет точку входа для приложения.
//

#include "main_header.h"

using namespace std;

int main()
{
	int choice = 1;
	while (choice > 0) {
		std::cout << "Modul 25\n";
		std::cout << "Choice exercise:\n";
		std::cout << "1. Implement an operation simulator.\n";
		std::cout << "2. Create a modular computer simulator project.\n";
		std::cout << "0. Exit.\n";

		std::cin >> choice;

		switch (choice)
		{
		case 1: {
			system("cls");
			mod25ex1();
			system("pause");
			system("cls");
			break;
		};
		case 2: {
			system("cls");
			mod25ex2();
			system("pause");
			system("cls");
			break;
		};
		default:
			choice = 0;
		}
	}
	return 0;
}
