#include "food.h"
#include "score.h"
#include "snake.h"
#include<windows.h>

int main() {
	int width = 400, height = 400;
	sf::RenderWindow window(sf::VideoMode(width, height), " Hello");
	window.setFramerateLimit(10);


	Food food((sf::Vector2f)window.getSize());

	Score score;

	Snake snake(window.getSize().x,window.getSize().y);
	
	while (window.isOpen()) {

		sf::Event event;

		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		if (snake.collision( food.food, snake.s[0])) {
			snake.update_snake();
			score.update_score();
			food.update_food();
		}
		
		snake.move_snake();
		
		if (snake.collision_with_itself() || snake.collision_with_wall()) {
			window.clear();
			score.Game_over();
			score.draw(window);
			window.display();
			Sleep(4000);
			window.close();
		}
		
		window.clear();
		food.draw(window);
		score.draw(window);
		snake.draw(window);
		
		window.display();
	}
}