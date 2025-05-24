#include "VLine.hpp"

#include <iostream>

namespace Scene {
	VLine::VLine(int y1, int y2, int x) : Point(x, y1), y2(y2) {
	}
	void VLine::draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) {
        if (this->x < x) {
            return;
        }
        for (int i = this->y; i < this->y2; i++) {
            if (i < y || i >= m_height) {
                continue;
            }
            size_t offset = (i * m_width + this->x) * 3;

            m_buffer[offset + 0] = 0;
            m_buffer[offset + 1] = 0;
            m_buffer[offset + 2] = 255;
        }
	}
}