#include "Rect.hpp"

#include <iostream>

namespace Scene {
	Rect::Rect(int x1, int y1, int x2, int y2) : Point(x1, y1), x2(x2), y2(y2) {}
	void Rect::draw() {
		std::cout << "Rect" << x << y << x2 << y2 << std::endl;
	}
}