//#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/Audio.hpp>
//#include <SFML/Network.hpp>
//#include <sstream>
//#include <vector>
//#include <chrono>
//#include <thread>
//#include <Windows.h>
//
//using namespace std;
//// food and scoreboard 
//
//
//
//sf::Vector2f random_food_position(int width, int height) {
//	return sf::Vector2f(round(rand() % width), round(rand() % height));
//}
//
//
//bool collision(sf::RectangleShape& rect1, sf::RectangleShape& rect2) {
//	sf::FloatRect r1 = rect1.getGlobalBounds();
//	sf::FloatRect r2 = rect2.getGlobalBounds();
//
//	return r1.intersects(r2);
//}
//
//
//int main() {
//
//	int width = 400, height = 400;
//	sf::RenderWindow window(sf::VideoMode(width, height), "Test");
//
//	window.setFramerateLimit(10);
//	// Food 
//
//	sf::RectangleShape food(sf::Vector2f(10, 10));
//	
//	food.setPosition(random_food_position(width, height));
//	
//	// FOOD
//
//	// Scoreboard 
//
//	int score = 0;
//	sf::Font font;
//	sf::Text Score;
//	
//	font.loadFromFile("Fonts/arial.ttf");
//
//	Score.setFont(font);
//	Score.setCharacterSize(24);
//	Score.setPosition(360, 5);
//	
//	// Scoreboard
//
//	// Snake
//
//	vector<sf::RectangleShape> s(3);
//	for (int i = 0; i < s.size(); i++) {
//		s[i].setSize(sf::Vector2f(10, 10));
//		s[i].setPosition((width / 2 + i*10), (height / 2));
//		s[i].setOutlineColor(sf::Color::Black);
//		s[i].setOutlineThickness(1);
//	}
//	// Snake
//	
//
//
//	sf::Vector2f Right(10, 0);
//	sf::Vector2f Left(-10, 0);
//	sf::Vector2f Up(0,-10);
//	sf::Vector2f Down(0, 10);
//
//	char direction = 'R';
//
//	while (window.isOpen()) {
//
//		sf::Event event;
//
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//		}
//
//
//		// Snake
//		sf::Vector2f temp(s[0].getPosition());
//		sf::Vector2f temp1(s[0].getPosition());
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
//			if (direction != 'L') {
//				direction = 'R';
//			}
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
//			if (direction != 'D') {
//				direction = 'U';
//			}
//			
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
//			if (direction != 'R') {
//				direction = 'L';
//			}
//			
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
//			if (direction != 'U') {
//				direction = 'D';
//			}
//		}
//		
//
//		if (direction == 'R') {
//			s[0].move(Right);
//			for (int i = 1; i < s.size(); i++) {
//				temp1 = s[i].getPosition();
//				s[i].setPosition(temp);
//				temp = temp1;
//			}
//		}
//		else if (direction == 'L') {
//			s[0].move(Left);
//			for (int i = 1; i < s.size(); i++) {
//				temp1 = s[i].getPosition();
//				s[i].setPosition(temp);
//				temp = temp1;
//			}
//		}
//		else if (direction == 'U') {
//			s[0].move(Up);
//			for (int i = 1; i < s.size(); i++) {
//				temp1 = s[i].getPosition();
//				s[i].setPosition(temp);
//				temp = temp1;
//			}
//		}
//		else if (direction == 'D') {
//			s[0].move(Down);
//			for (int i = 1; i < s.size(); i++) {
//				temp1 = s[i].getPosition();
//				s[i].setPosition(temp);
//				temp = temp1;
//			}
//		}
//
//
//		for (int i = 4; i < s.size(); i++) {
//			if (collision(s[0], s[i])) {
//				window.clear();
//
//				sf::Text text;
//
//				text.setFont(font);
//				text.setCharacterSize(45);
//				text.setString("GAME OVER");
//				text.setPosition(width/2 - 10, height / 2);
//				
//				window.draw(text);
//				
//				int i = 0;
//				while (i<10000) {
//					i++;
//				}
//				window.close();
//			}
//		}
//		
//		if (s[0].getPosition().x <= -5 || s[0].getPosition().x >= width || s[0].getPosition().y <= -5 || s[0].getPosition().y >= height) {
//			window.clear();
//
//			sf::Text text;
//
//			text.setFont(font);
//			text.setCharacterSize(30);
//			text.setString("GAME OVER");
//			text.setPosition(width / 2 - 100, height / 2 -25);
//
//			window.clear();
//			window.draw(text);
//			window.display();
//
//			int i = 0;
//			while (i < 900000) {
//				
//				i++;
//			}
//			window.close();
//		}
//		
//		// Snake
//
//
//
//		// FOOD
//
//
//		if (collision(s[0],food)) {
//
//			food.setPosition(random_food_position(width, height));
//			score++;
//			std::stringstream ss;
//			ss << score;
//			Score.setString(ss.str());
//
//			sf::RectangleShape last;
//
//			temp1 = s[s.size() - 1].getPosition();
//			last.setSize(sf::Vector2f(10, 10));
//			last.setPosition(temp1);
//			last.setOutlineColor(sf::Color::Black);
//			last.setOutlineThickness(1);
//
//			s.push_back(last);
//		}
//		// FOOD
//
//		
//		
//				
//		
//
//
//		
//
//		window.clear();
//
//		window.draw(Score);
//		window.draw(food);
//
//
//		// snake
//		
//		for (int i = 0; i < s.size(); i++) {
//			window.draw(s[i]);
//		}
//		// snake
//
//
//		window.display();
//	}
//}