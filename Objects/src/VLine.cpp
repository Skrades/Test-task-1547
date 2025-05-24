#include "VLine.hpp"

#include <iostream>

namespace Scene {
	VLine::VLine(int y1, int y2, int x) : Point(x, y1), y2(y2) {
	}
	void VLine::draw() {
		std::cout << "VLine" << x << y << x << y2 << std::endl;
	}
}