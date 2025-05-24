#include "Point.hpp"
#include <iostream>
#include <memory>

namespace Scene {
	Point::Point(int x, int y) : Object(x, y) {
	}

	void Point::draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) {
        if (this->x < x || this->x >= m_width || this->y < y || this->y >= m_height) {
            return;
        }

        size_t offset = (this->y * m_width + this->x) * 3;

        m_buffer[offset + 0] = 0;
        m_buffer[offset + 1] = 0;
        m_buffer[offset + 2] = 255;
	}
}