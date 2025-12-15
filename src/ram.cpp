#include "header_ram.h"

int num[8];

//void writeOne(int inputNum, int index) {
//	num[index] = inputNum;
//}

void write(int inputNums[8]) {
	for (int i = 0; i < 8; i++) {
		//writeOne(inputNums[i], i);
		num[i] = inputNums[i];
	}
}

int readOne(int index) {
	return num[index];
}

int* read() {
	return num;
}