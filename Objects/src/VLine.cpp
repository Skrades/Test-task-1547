#include "VLine.hpp"

#include <iostream>

namespace Scene {
	VLine::VLine(int y1, int y2, int x) : Point(x, y1), y2(y2) {
	}
	void VLine::draw(uint8_t* m_buffer, Frame frame, int width) {
        if (x < frame.x1 || x > frame.x2) {
            return;
        }
        for (int i = y; i < y2; i++) {
            if (i < frame.y1 || i > frame.y2) {
                continue;
            }
            size_t offset = (i * width + x) * 3;

            m_buffer[offset + 0] = 0;
            m_buffer[offset + 1] = 0;
            m_buffer[offset + 2] = 255;
        }
	}
}