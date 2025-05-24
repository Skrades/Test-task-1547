#pragma once

#include "Point.hpp"

namespace Scene {
	class VLine : public Scene::Point {
	public:
		VLine(int y1, int y2, int x);
		void draw() override;

	private:
		int y2;
	};
}