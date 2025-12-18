#include "header_ex2.h"

void mod25ex2() {
	std::cout << "2. Create a modular computer simulator project.\n";
	std::string input;
	do {
		std::cin >> input;
		if (input == "sum") {
			compute();
		}
		if (input == "save") {
			save();
		}
		if (input == "load") {
			load();
		}
		if (input == "input") {
			scanInConsole();
		}
		if (input == "display") {
			printToConsole(read());
		}
		if (input == "exit") {
			break;
		}
	} while (true);
}