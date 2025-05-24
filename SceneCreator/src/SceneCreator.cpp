#include <iostream>
#include <vector>
#include <sstream>

#include "SceneCreator.hpp"
#include "Rect.hpp"
#include "HLine.hpp"
#include "VLine.hpp"

namespace Scene {
	void SceneCreator::create(std::ifstream& file) {
		std::string line;
		std::getline(file, line);
		createBitmap(line);
		while (std::getline(file, line)) {
			std::string type;
			type = line.substr(0, line.find_first_of(" "));
			if (std::strcmp(type.c_str(), "point") == 0) {
				addPoint(line);
				continue;
			}
			if (std::strcmp(type.c_str(), "rect") == 0) {
				addRect(line);
				continue;
			}
			if (std::strcmp(type.c_str(), "hline") == 0) {
				addHLine(line);
				continue;
			}
			if (std::strcmp(type.c_str(), "vline") == 0) {
				addVLine(line);
				continue;
			}
		}
		bmp.save("test.bmp");
	}	

	void SceneCreator::createBitmap(std::string line) {
		std::istringstream sstream(line);
		std::string token;
		sstream >> token;
		x = std::stoi(token);
		sstream >> token;
		y = std::stoi(token);
		sstream >> token;
		bmp.m_width = std::stoi(token);
		sstream >> token;
		bmp.m_height = std::stoi(token);
		bmp.m_buffer = new uint8_t[bmp.m_width * bmp.m_height * 3];
	}

	void SceneCreator::addPoint(std::string line) {
		std::istringstream sstream(line);
		std::string token;
		sstream >> token;
		sstream >> token;
		int x = std::stoi(token);
		sstream >> token;
		int y = std::stoi(token);
		Scene::Point point(x, y);
		point.draw(bmp.m_buffer, this->x, this->y, bmp.m_width, bmp.m_height);
	}
	void SceneCreator::addRect(std::string line) {
		std::istringstream sstream(line);
		std::string token;
		sstream >> token;
		sstream >> token;
		int x1 = std::stoi(token);
		sstream >> token;
		int y1 = std::stoi(token);
		sstream >> token;
		int x2 = std::stoi(token);
		sstream >> token;
		int y2 = std::stoi(token);
		Scene::Rect rect(x1, y1, x2, y2);
		rect.draw(bmp.m_buffer, this->x, this->y, bmp.m_width, bmp.m_height);
	}
	void SceneCreator::addHLine(std::string line) {
		std::istringstream sstream(line);
		std::string token;
		sstream >> token;
		sstream >> token;
		int x1 = std::stoi(token);
		sstream >> token;
		int x2 = std::stoi(token);
		sstream >> token;
		int y = std::stoi(token);
		Scene::HLine hline(x1, x2, y);
		hline.draw(bmp.m_buffer, this->x, this->y, bmp.m_width, bmp.m_height);
	}
	void SceneCreator::addVLine(std::string line) {
		std::istringstream sstream(line);
		std::string token;
		sstream >> token;
		sstream >> token;
		int y1 = std::stoi(token);
		sstream >> token;
		int y2 = std::stoi(token);
		sstream >> token;
		int x = std::stoi(token);
		Scene::VLine vline(y1, y2, x);
		vline.draw(bmp.m_buffer, this->x, this->y, bmp.m_width, bmp.m_height);
	}
}