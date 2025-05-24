#pragma once

#include "Point.hpp"

namespace Scene {
	class HLine : public Scene::Point {
	public:
		HLine(int x1, int x2, int y);
		void draw(uint8_t* m_buffer, Frame frame, int width) override;

	private:
		int x2;
	};
}