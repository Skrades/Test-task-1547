#include "HLine.hpp"

#include <iostream>

namespace Scene {
	HLine::HLine(int x1, int x2, int y) : Point(x1, y), x2(x2) {
	}
	void HLine::draw(uint8_t* m_buffer, Frame frame, int width) {
        if (y < frame.y1 || y > frame.y2) {
            return;
        }
        for (int i = x; i < x2; i++) {
            if (i < frame.x1 || i >= frame.x2) {
                continue;
            }
            size_t offset = (y * width + i) * 3;

            m_buffer[offset + 0] = 0;
            m_buffer[offset + 1] = 0;
            m_buffer[offset + 2] = 255;
        }
	}
}