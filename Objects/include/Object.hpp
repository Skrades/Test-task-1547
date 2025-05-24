#pragma once

#include <cstdint>

namespace Scene {
	class Object {
	public:
		Object(int x, int y);
		void setX(int x);
		void setY(int y);
		int getX() const;
		int getY() const;

		void virtual draw(uint8_t* m_buffer, int x, int y, int m_width, int m_height) = 0;

	protected:
		int x;
		int y;
	};
}