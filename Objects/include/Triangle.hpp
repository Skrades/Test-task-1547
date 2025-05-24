#pragma once

#include "Line.hpp"

namespace Scene {
	class Triangle {
	public:
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
		void draw(uint8_t* m_buffer, Frame frame, int width);

	private:
		Line line1;
		Line line2;
		Line line3;
	};
}