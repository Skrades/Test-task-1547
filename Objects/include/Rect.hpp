#pragma once

#include "Point.hpp"

namespace Scene {
	class Rect : public Scene::Point {
	public:
		Rect(int x1, int y1, int x2, int y2);
		void draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) override;

	private:
		int x2;
		int y2;
	};
}