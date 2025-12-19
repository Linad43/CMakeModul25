// CMakeModul25.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "header_ex1.h"
#include "header_ex2.h"

//void mod25ex1();
//void mod25ex2();

std::vector <std::string> splitString(const std::string& str, const std::string& del);

struct point {
	double x;
	double y;
	void constructor(double inputX, double inputY) {
		x = inputX;
		y = inputY;
	}
	std::string toString() {
		return "(" + std::to_string(x) + ";" + std::to_string(y) + ")";
	}
	double equals(point inputPoint) {
		if (x == inputPoint.x && y == inputPoint.y)
			return true;
		return false;
	}
};
