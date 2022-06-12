//#include<SFML/Graphics.hpp>
//#include<SFML/Window.hpp>
//#include<SFML/System.hpp>
//#include<iostream>
//
//#define PI 3.1415
//
//
//using namespace std;
//
//int main() {
//	int height = 600, width = 1000;
//	sf::RenderWindow window(sf::VideoMode(width, height),"Mouse basics");
//	
//	vector<pair<sf::RectangleShape, int>>v;
//
//	for (int i = 0; i < 10; i++) {
//		int a = rand() % 100;
//		sf::RectangleShape b;
//		b.setSize(sf::Vector2f(10,a*10));
//		b.setPosition(i, 600);
//		v.push_back(make_pair(b, a));
//	
//	}
//
//	
//
//
//	while (window.isOpen()) {
//		sf::Event event;
//
//		while (window.pollEvent(event)) {
//
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//
//
//		}
//		
//		
//
//		for (int k = 0; k < v.size(); k++) {
//			
//			window.draw(v[k].first);
//			window.display();
//			
//		}
//		for (int i = 0; i < v.size(); i++) {
//			//window.clear();
//			for (int j = i; j < v.size(); j++) {
//				if (v[i].second < v[j].second) {
//					int a;
//					sf::RectangleShape b;
//					a = v[i].second;
//					b = v[i].first;
//
//					v[i].first = v[j].first;
//					v[i].second = v[j].second;
//
//
//					v[j].second = a;
//					v[j].first = b;
//
//					for (int k = 0; k < v.size(); k++) {
//						v[k].first.setPosition(k, 600);
//						window.draw(v[k].first);
//						window.display();
//						cout << v[k].second << endl;
//					}
//				}
//			}
//		}
//
//		
//		
//		//window.clear();
//		
//		window.display();
//	}
//}