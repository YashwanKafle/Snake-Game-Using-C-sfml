#pragma once

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<sstream>


class Score
{
public:
	int score = 0;
	Score();
	void update_score();
	void draw(sf::RenderWindow &window);
	void Game_over();

private:
	
	sf::Text text;
	sf::Font font;

	
	
};

