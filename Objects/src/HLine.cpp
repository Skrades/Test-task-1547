#include "HLine.hpp"

#include <iostream>

namespace Scene {
	HLine::HLine(int x1, int x2, int y) : Point(x1, y), x2(x2) {
	}
	void HLine::draw() {
		std::cout << "HLine" << x << y << x2 << y << std::endl;
	}
}