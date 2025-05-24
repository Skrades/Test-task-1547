#include "Point.hpp"
#include <iostream>

namespace Scene {
	Point::Point(int x, int y) : Object(x, y) {
	}

	void Point::draw() {
		std::cout << "Point" << x << y << std::endl;
	}
}