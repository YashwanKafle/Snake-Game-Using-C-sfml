#pragma once

#include <SFML/Graphics.hpp>


class Food
{
private:
	
	sf::Vector2f Window_Size;
public:
	sf::RectangleShape food;
	Food(sf::Vector2f window_size) {
		Window_Size = window_size;
		food.setSize(sf::Vector2f(10.f, 10.f));
		update_food();
	};

	void draw(sf::RenderWindow& window);
	sf::Vector2f random_position(int height, int width);
	void update_food();
	sf::RectangleShape Getshape();

};

