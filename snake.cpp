#include "snake.h"



Snake::Snake(int width,int height) {
	Width = width;
	Height = height;
	
	create_snake();
	
	 direction = 'R';
}

void Snake::create_snake() {
	s.clear();

	
	for (int i = 0; i < 3; i++) {
		
		sf::RectangleShape  last;
		last.setSize(sf::Vector2f(10, 10));
		last.setPosition(((Width/2) - i * 10), (Height / 2));
		last.setOutlineColor(sf::Color::Black);
		last.setOutlineThickness(1);

		s.push_back(last);
	}
	
}


void Snake::draw(sf::RenderWindow &window) {
	for (int i = 0; i < s.size(); i++) {
		window.draw(s[i]);
	}
}


void Snake::update_snake() {
	sf::RectangleShape last;
	sf::Vector2f temp1;
	
	temp1 = s[s.size() - 1].getPosition();
	last.setSize(sf::Vector2f(10, 10));
	last.setPosition(temp1);
	last.setOutlineColor(sf::Color::Black);
	last.setOutlineThickness(1);
	
	s.push_back(last);
}


bool Snake::collision(sf::RectangleShape& rect1, sf::RectangleShape& rect2) {
	sf::FloatRect r1 = rect1.getGlobalBounds();
	sf::FloatRect r2 = rect2.getGlobalBounds();

	return r1.intersects(r2);
}

bool Snake::collision_with_itself() {
	for (int i = 4; i < s.size(); i++) {
		if (collision(s[0], s[i])) {
			printf("itself");
			return true;
		}
	}
	return false;
}

bool Snake::collision_with_wall() {
	if (s[0].getPosition().x <= -5 || s[0].getPosition().x >= Width || s[0].getPosition().y <= -5 || s[0].getPosition().y >= Height) {
		return true;
	
	}
	return false;
}



void Snake::move_snake() {
	
	sf::Vector2f temp1(s[0].getPosition());
	sf::Vector2f temp2(s[0].getPosition());

		s[0].move(dir_x, dir_y);

		for (int i = 1; i < s.size(); i++) {
			temp2 = s[i].getPosition();
			s[i].setPosition(temp1);
			temp1 = temp2;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			if (direction != 'D') {
				dir_x = 0;
				dir_y = -10;
				direction = 'U';
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			if (direction != 'U') {
				dir_x = 0;
				dir_y = 10;
				direction = 'D';
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			if (direction != 'R') {
				dir_x = -10;
				dir_y = 0;
				direction = 'L';
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			if (direction != 'L') {
				dir_x = 10;
				dir_y = 0;

				direction = 'R';
			}
		}

}
	



