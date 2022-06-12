#pragma once
#include<SFML/Graphics.hpp>
#include<vector>

using namespace std;
class Snake
{
public:
	
	vector <sf::RectangleShape> s;

	Snake(int width,int height);

	void create_snake();
	void draw(sf::RenderWindow& window);
	bool collision(sf::RectangleShape& rect1, sf::RectangleShape& rect2);
	void update_snake();

	bool collision_with_itself();
	bool collision_with_wall();
	

	void move_snake();


	
	
private:
	int Width;
	int Height;
	float dir_x = 10;
	float dir_y = 0;
	
	char direction;
	

	
	
};

