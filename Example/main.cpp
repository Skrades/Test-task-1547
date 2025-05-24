#include "SceneCreator.hpp"
#include <fstream>
#include <iostream>
#include <filesystem>

int main() {
	Scene::SceneCreator creator;
	std::ifstream in("Input.txt");
	if(in.is_open())
		creator.create(in);
	in.close();
	return 0;
}