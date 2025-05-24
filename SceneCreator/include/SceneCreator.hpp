#pragma once
#include <string>
#include <fstream>

#include "Bitmap.hpp"
#include "Frame.hpp"

namespace Scene {

	class SceneCreator {
	public:
		void create(std::ifstream& file);
		void createBitmap(std::string line);
		void addPoint(std::string line);
		void addRect(std::string line);
		void addHLine(std::string line);
		void addVLine(std::string line);
		void addLine(std::string line);
		void addTriangle(std::string line);

	private:
		Bitmap bmp;
		Frame frame;
	};
}