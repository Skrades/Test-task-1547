#pragma once

#include "Point.hpp"

namespace Scene {
	class VLine : public Scene::Point {
	public:
		VLine(int y1, int y2, int x);
		void draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) override;

	private:
		int y2;
	};
}