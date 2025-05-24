#pragma once

#include "Point.hpp"

namespace Scene {
	class Rect : public Scene::Point {
	public:
		Rect(int x1, int y1, int x2, int y2);
		void draw() override;

	private:
		int x2;
		int y2;
	};
}