#include "Triangle.hpp"

#include <iostream>

namespace Scene {
    Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) : line1(x1, y1, x2, y2), line2(x2, y2, x3, y3), line3(x3, y3, x1, y1) {
    }
    void Triangle::draw(uint8_t* m_buffer, Frame frame, int width) {
        line1.draw(m_buffer, frame, width);
        line2.draw(m_buffer, frame, width);
        line3.draw(m_buffer, frame, width);
    }
}