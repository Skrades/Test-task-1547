#pragma once

#include "Point.hpp"

namespace Scene {
	class HLine : public Scene::Point {
	public:
		HLine(int x1, int x2, int y);
		void draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) override;

	private:
		int x2;
	};
}