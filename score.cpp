#include "score.h"


Score::Score() {
	text.setCharacterSize(24);
	font.loadFromFile("./Fonts/arial.ttf");
	text.setFont(font);
	text.setPosition(360, 5);
	update_score();
}


void Score::update_score() {

	std::stringstream ss;
	score++;
	ss << score;
	text.setString(ss.str());
}
void Score::Game_over() {
	
	text.setString("Game Over!!");
	text.setPosition(150, 150);
}
void Score::draw(sf::RenderWindow& window) {
	window.draw(text);
}