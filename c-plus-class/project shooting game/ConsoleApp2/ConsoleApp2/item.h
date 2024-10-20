#include "stdafx.h"
#include<SFML\Graphics.hpp>
#include<iostream>
#include<ctime>
class item
{
public:
	sf::Time time1;
	sf::Clock clock1;
	sf::Time time2;
	sf::Clock clock2;
	sf::RectangleShape rect;
	sf::Texture img;
	int hp = 5;
	item() {
		srand(time(0));
		img.loadFromFile("apple.png");
		rect.setPosition(sf::Vector2f(100 + rand() % 600, 100 + rand() % 550));
		rect.setSize(sf::Vector2f(20, 20));
		rect.setTexture(&img);
	}

	void reandomplace()
	{

		time1 = clock1.getElapsedTime();
		if (time1.asSeconds() > 20.0) {

			rect.setPosition(sf::Vector2f(300 + rand() % 350, 30 + rand() % 700 * 1.0f));
			time1 = clock1.restart();
		}
	}
private:
	
};


