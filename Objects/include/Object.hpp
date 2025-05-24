#pragma once

#include <cstdint>
#include "Frame.hpp"

namespace Scene {
	class Object {
	public:
		Object(int x, int y);
		void setX(int x);
		void setY(int y);
		int getX() const;
		int getY() const;

		void virtual draw(uint8_t* m_buffer, Frame frame, int width) = 0;

	protected:
		int x;
		int y;
	};
}