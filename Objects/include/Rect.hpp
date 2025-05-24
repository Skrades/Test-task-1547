#pragma once

#include "Point.hpp"

namespace Scene {
	class Rect : public Scene::Point {
	public:
		Rect(int x1, int y1, int x2, int y2);
		void draw(uint8_t* m_buffer, Frame frame, int width) override;

	private:
		int x2;
		int y2;
	};
}