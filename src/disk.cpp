#include "header_disk.h"
#include "header_ram.h"

void save() {
    std::ofstream out;
    out.open("data.txt");
    if (out.is_open())
    {
        for (int i = 0; i < 8; i++) {
            out << *read() + i << " ";
        }
    }
    out.close();
    std::cout << "File has been written" << std::endl;
}
void load() {
    int num[8];
    std::string line;
    std::ifstream in("data.txt");
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();
    auto vecNum = splitString(line, " ");
    for (int i = 0; i < 8; i++) {
        num[i] = stoi(vecNum[i]);
    }
    write(num);
}