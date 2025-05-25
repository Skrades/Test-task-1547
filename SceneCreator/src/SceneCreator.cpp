#include <iostream>
#include <vector>
#include <sstream>

#include "SceneCreator.hpp"
#include "Rect.hpp"
#include "HLine.hpp"
#include "VLine.hpp"
#include "Line.hpp"
#include "Triangle.hpp"

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
			if (std::strcmp(type.c_str(), "line") == 0) {
				addLine(line);
				continue;
			}
			if (std::strcmp(type.c_str(), "triangle") == 0) {
				addTriangle(line);
				continue;
			}
		}
		bmp.save("../../Example/Output.bmp");
	}	

	void SceneCreator::createBitmap(std::string line) {
		std::istringstream sstream(line);
		std::string token;
		sstream >> token;
		frame.x1 = std::stoi(token);
		sstream >> token;
		frame.y1 = std::stoi(token);
		sstream >> token;
		frame.x2 = std::stoi(token);
		sstream >> token;
		frame.y2 = std::stoi(token);
		bmp.m_width = 1920;
		bmp.m_height = 1080;
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
		point.draw(bmp.m_buffer, frame, bmp.m_width);
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
		rect.draw(bmp.m_buffer, frame, bmp.m_width);
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
		hline.draw(bmp.m_buffer, frame, bmp.m_width);
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
		vline.draw(bmp.m_buffer, frame, bmp.m_width);
	}
	void SceneCreator::addLine(std::string line) {
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
		Scene::Line line_(x1, y1, x2, y2);
		line_.draw(bmp.m_buffer, frame, bmp.m_width);
	}
	void SceneCreator::addTriangle(std::string line) {
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
		sstream >> token;
		int x3 = std::stoi(token);
		sstream >> token;
		int y3 = std::stoi(token);
		Scene::Triangle triangle(x1, y1, x2, y2, x3, y3);
		triangle.draw(bmp.m_buffer, frame, bmp.m_width);
	}
}