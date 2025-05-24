#include "Rect.hpp"

#include <iostream>

namespace Scene {
	Rect::Rect(int x1, int y1, int x2, int y2) : Point(x1, y1), x2(x2), y2(y2) {
    }

	void Rect::draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) {
        for (int j = this->y; j < this->y2; j++) {
            for (int i = this->x; i < this->x2; i++) {
                if (i < x || i >= m_width || j < y || j >= m_height) {
                    continue;
                }
                size_t offset = (j * m_width + i) * 3;

                m_buffer[offset + 0] = 0;
                m_buffer[offset + 1] = 0;
                m_buffer[offset + 2] = 255;
            }
        }
        
	}
}