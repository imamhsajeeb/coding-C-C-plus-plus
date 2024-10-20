#include "stdafx.h"
#include "anotherE.h"
#include<SFML\Graphics.hpp>
#include<iostream>
#include<time.h>
anotherE::anotherE()
{
	shape.setSize(sf::Vector2f(40.0f, 40.0f));
	shape.setPosition(sf::Vector2f(300+rand()%350, 30 + rand() %700 ));
	
	//shape.setFillColor(sf::Color::Yellow);
	
	tex.loadFromFile("flame.png");
	shape.setTexture(&tex);
	
	shape.setTextureRect(sf::IntRect(1*24, 1, 24, 24));

}


anotherE::~anotherE()
{
}

void anotherE::positionUP()
{
	time1 = clock1.getElapsedTime();
	if (time1.asSeconds() > 10.0) {
		//srand(6);
shape.setPosition(sf::Vector2f(300+rand()%350, 30 + rand() % 700 * 1.0f));
		clock1.restart();
	}
	
}
void anotherE::draw(sf::RenderWindow &window) {
	
	//std::cout << time.asSeconds() << std::endl;;
window.draw(shape);
}
void anotherE::sprite() {
	time = clock.getElapsedTime();
	if (time.asSeconds() > 0.05) {
		shape.setTextureRect(sf::IntRect(r * 24, 0, 24, 24));
		r++;
		if (r == 7) {
			r = 0;
		}
		time = clock.restart();
	}
}