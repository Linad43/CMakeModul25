#include "header_cpu.h"
#include "header_ram.h"
#include "header_gpu.h"

void compute() {
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += *(read()+i);
	}
	printToConsole(sum);
}