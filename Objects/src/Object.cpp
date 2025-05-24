#include "Object.hpp"

namespace Scene {
	Object::Object(int x, int y) : x(x), y(y) {
	}

	void Object::setX(int x) { this->x = x; }

	void Object::setY(int y) { this->y = y; }

	int Object::getX() const { return x; }

	int Object::getY() const { return y; }
}