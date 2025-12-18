#include "header_kbd.h"

void scanInConsole() {
    int num[8];
    std::string line;
    for (int i = 0; i < 8; i++) {
        std::cout << "num[" << i + 1 << "] = ";
        std::cin >> line;
        num[i] = stoi(line);
    }
    write(num);
    std::cout << "read success";
}