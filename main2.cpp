//#include <iostream>
//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <vector>
//
//using namespace std;
//using namespace sf;
//
//int main()
//{
//	int width = 600;
//	int height = 400;
//	RenderWindow window(VideoMode(width, height), "Pong");
//	window.setFramerateLimit(10);
//	//Font font;
//	//if (!font.loadFromFile("Fonts/times.ttf")) {
//	//	cout << "Error" << endl;
//	//};
//	////Text text("Hello World", font, 24);
//	//Text text;
//	//text.setFont(font);
//	//text.setString("Hello World");
//	//text.setCharacterSize(24);
//	float size_x = 20;
//	float size_y = 20;
//	float pos_x = 100;
//	float pos_y = 100;
//
//	float dir_x = 20;
//	float dir_y = 0;
//	/*RectangleShape rectangle1(Vector2f(size_x, size_y));
//	rectangle1.setPosition(Vector2f(pos_x, pos_y));*/
//
//	vector<RectangleShape> s(3);
//	for (int i = 0; i < s.size(); i++) {
//		s[i].setSize(Vector2f(20, 20));
//		s[i].setPosition((width / 2) + i * 20, (height / 2));
//	}
//	
//	while (window.isOpen()) {
//
//		Event event;
//
//		Vector2f temp(s[0].getPosition());
//		Vector2f temp1(s[0].getPosition());
//		s[0].move(dir_x, dir_y);
//
//		for (int i = 1; i < s.size(); i++) {
//			temp1 = s[i].getPosition();
//			s[i].setPosition(temp);
//			temp = temp1;
//		}
//
//		while (window.pollEvent(event)) {
//			if (event.type == Event::Closed) {
//				window.close();
//			}
//		}
//
//		//Keyboard input
//		if (Keyboard::isKeyPressed(Keyboard::W)) {
//			dir_x = 0;
//			dir_y = -20;
//			s[0].move(dir_x, dir_y);
//
//			for (int i = 0; i < s.size(); i++) {
//				s[i].move(dir_x, dir_y);
//			}
//			
//		}
//
//		if (Keyboard::isKeyPressed(Keyboard::S)) {
//			dir_x = 0;
//			dir_y = 20;
//
//			for (int i = 0; i < s.size(); i++) {
//				s[i].move(dir_x, dir_y);
//			}
//		}
//		if (Keyboard::isKeyPressed(Keyboard::A)) {
//			dir_x = -20;
//			dir_y = 0;
//
//			for (int i = 0; i < s.size(); i++) {
//				s[i].move(dir_x, dir_y);
//			}
//		}
//		if (Keyboard::isKeyPressed(Keyboard::D)) {
//			dir_x = 20;
//			dir_y = 0;
//
//			for (int i = 0; i < s.size(); i++) {
//				s[i].move(dir_x, dir_y);
//			}
//		}
//
//
//		window.clear();
//		//window.draw(text);
//
//		for (int i = 0; i < s.size(); i++) {
//			window.draw(s[i]);
//		}
//		window.display();
//	}
//}
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu





