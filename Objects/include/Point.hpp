#pragma once

#include "Object.hpp"

namespace Scene{
	class Point : public Scene::Object {
	public:
		Point(int x, int y);
		virtual void draw() override;
	};
}