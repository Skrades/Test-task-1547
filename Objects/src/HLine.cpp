#include "HLine.hpp"

#include <iostream>

namespace Scene {
	HLine::HLine(int x1, int x2, int y) : Point(x1, y), x2(x2) {
	}
	void HLine::draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) {
        if (this->y < y) {
            return;
        }
        for (int i = this->x; i < this->x2; i++) {
            if (i < x || i >= m_width) {
                continue;
            }
            size_t offset = (this->y * m_width + i) * 3;

            m_buffer[offset + 0] = 0;
            m_buffer[offset + 1] = 0;
            m_buffer[offset + 2] = 255;
        }
	}
}