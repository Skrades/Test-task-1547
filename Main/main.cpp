#include "Point.hpp"
#include "Rect.hpp"
#include "VLine.hpp"
#include "HLine.hpp"

int main() {
	Scene::Point point(1, 2);
	point.draw();
	Scene::Rect rect(1, 2, 3, 4);
	rect.draw();
	Scene::HLine hline(10, 20, 10);
	hline.draw();
	Scene::VLine vline(30, 40, 30);
	vline.draw();
	return 0;
}