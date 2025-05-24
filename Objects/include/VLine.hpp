#pragma once

#include "Point.hpp"

namespace Scene {
	class VLine : public Scene::Point {
	public:
		VLine(int y1, int y2, int x);
		void draw(uint8_t* m_buffer, Frame frame, int width) override;

	private:
		int y2;
	};
}