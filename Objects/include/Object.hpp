#pragma once

namespace Scene {
	class Object {
	public:
		Object(int x, int y);
		void setX(int x);
		void setY(int y);
		int getX() const;
		int getY() const;

		void virtual draw() = 0;

	protected:
		int x;
		int y;
	};
}