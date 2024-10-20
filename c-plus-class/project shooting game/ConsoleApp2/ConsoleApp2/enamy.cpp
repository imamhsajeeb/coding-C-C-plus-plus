#include "stdafx.h"
#include "enamy.h"
#include<SFML\Graphics.hpp>

enamy::enamy()
{
	tex.loadFromFile("protz2.png");
	tex.setSmooth(true);
	shape.setTexture(&tex);
	shape.setFillColor(sf::Color(200, 200, 200));
	shape.setSize(sf::Vector2f(80, 80));
	shape.setPosition(50.0f, 70.0f);
	shape.setTextureRect(sf::IntRect(0, 64 * 2, 64, 64));
}


enamy::~enamy()
{
}
void enamy::cantgo()
{


	if (shape.getPosition().x <= 0) {

		shape.setPosition(sf::Vector2f(0, shape.getPosition().y));
	}

	else if (shape.getPosition().x >= 1060)
	{

		shape.setPosition(sf::Vector2f(1060, shape.getPosition().y));
	}
	else if (shape.getPosition().y <= 0) {

		shape.setPosition(sf::Vector2f(shape.getPosition().x, 0));
	}
	else if (shape.getPosition().y >= 700 - 30) {

		shape.setPosition(sf::Vector2f(shape.getPosition().x, 700 - 30));
	}
	else if (shape.getPosition().y == 0 && shape.getPosition().x == 0) {
		shape.setPosition(sf::Vector2f(0, 0));
	}
	else if (shape.getPosition().y >= 700-30 && shape.getPosition().x >= 1060) {
		shape.setPosition(sf::Vector2f(1060, 700 - 30));
	}
	else if (shape.getPosition().y <= 0 && shape.getPosition().x >= 1060) {
		shape.setPosition(sf::Vector2f(1060, 0));
	}


}

void enamy::update_position()
{
	shape.setPosition(shape.getPosition());
	//cout << (shape.getPosition().x) << " " << (shape.getPosition().y) << endl;;
}

void enamy::updatemovement2()
{

	 if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		shape.move(-spreed, 0);
		a = 1;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 1, 64, 64));
		r++;
	}
	 else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		shape.move(spreed, 0);
		a = 2;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 3, 64, 64));
		r++;
	}
	 else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		shape.move(0, -spreed);
		a = 3;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 0, 64, 64));
		r++;
	}
	 else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		shape.move(0, spreed);
		a = 4;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 2, 64, 64));
		r++;
	}
	 else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
		shape.setPosition(50.0f,70.0f);
	}
	 if (r == 8) {
		 r = 0;
	 }
}
