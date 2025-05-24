#pragma once

#include "Point.hpp"

namespace Scene {
	class HLine : public Scene::Point {
	public:
		HLine(int x1, int x2, int y);
		void draw() override;

	private:
		int x2;
	};
}