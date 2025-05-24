#include "Line.hpp"

#include <iostream>

namespace Scene {
    Line::Line(int x1, int y1, int x2, int y2) : Point(x1, y1), x2(x2), y2(y2) {
    }
    void Line::draw(uint8_t* m_buffer, Frame frame, int width) {
        int dx = abs(x2 - x);
        int dy = -abs(y2 - y);
        int sx = x < x2 ? 1 : -1;
        int sy = y < y2 ? 1 : -1;
        int err = dx + dy;

        while (true) {
            if (x >= frame.x1 && x <= frame.x2 &&
                y >= frame.y1 && y <= frame.y2) {
                size_t offset = (y * width + x) * 3;
                m_buffer[offset + 0] = 0;
                m_buffer[offset + 1] = 0;
                m_buffer[offset + 2] = 255;
            }

            if (x == x2 && y == y2) break;
            int e2 = 2 * err;
            if (e2 >= dy) { err += dy; x += sx; }
            if (e2 <= dx) { err += dx; y += sy; }
        }
    }
}