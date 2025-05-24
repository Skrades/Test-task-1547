#include "Point.hpp"
#include <iostream>
#include <memory>

namespace Scene {
	Point::Point(int x, int y) : Object(x, y) {
	}

	void Point::draw(uint8_t* m_buffer, Frame frame, int width) {
        if (x < frame.x1 || x > frame.x2 || y < frame.y1 || y > frame.y2) {
            return;
        }

        size_t offset = (y * width + x) * 3;

        m_buffer[offset + 0] = 0;
        m_buffer[offset + 1] = 0;
        m_buffer[offset + 2] = 255;
	}
}