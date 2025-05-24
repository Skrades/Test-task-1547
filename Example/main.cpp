#include "SceneCreator.hpp"
#include <fstream>
#include <iostream>
#include <filesystem>

int main() {
	//std::cout << "Текущая рабочая директория: " << std::filesystem::current_path() << std::endl;
	Scene::SceneCreator creator;
	std::ifstream in("text.txt");
	if(in.is_open())
		creator.create(in);
	in.close();
	return 0;
}