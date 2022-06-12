#include "food.h"
#include <iostream>




void Food::draw(sf::RenderWindow& window) {
	window.draw(food);
	
}

void Food::update_food() {
	food.setPosition(Food::random_position(Window_Size.x, Window_Size.y));
}


sf::Vector2f Food::random_position(int height, int width) {
	return sf::Vector2f(rand() % height, rand() % width);
}






