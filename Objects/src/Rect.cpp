#include "Rect.hpp"

#include <iostream>

namespace Scene {
	Rect::Rect(int x1, int y1, int x2, int y2) : Point(x1, y1), x2(x2), y2(y2) {
    }

	void Rect::draw(uint8_t* m_buffer, Frame frame, int width) {
        for (int j = y; j < y2; j++) {
            for (int i = x; i < x2; i++) {
                if (i < frame.x1 || i > frame.x2 || j < frame.y1 || j > frame.y2) {
                    continue;
                }
                size_t offset = (j * width + i) * 3;

                m_buffer[offset + 0] = 0;
                m_buffer[offset + 1] = 0;
                m_buffer[offset + 2] = 255;
            }
        }
        
	}
}