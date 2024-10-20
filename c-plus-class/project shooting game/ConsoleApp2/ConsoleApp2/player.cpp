#include "stdafx.h"

#include<SFML\Graphics.hpp>
#include "player.h"
#include<iostream>

player::player()
{
	tex.loadFromFile("protz.png");
	shape.setTexture(&tex);
	shape.setSize(sf::Vector2f(80,80));
	//shape.setFillColor(sf::Color(200, 20, 20));
	//shape.setPointCount(3000);
	shape.setPosition(1000.0f, 70.00);
	shape.setTextureRect(sf::IntRect(0, 64*2, 64, 64));
}


void player::cantgo()
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
		
		shape.setPosition(sf::Vector2f(shape.getPosition().x, 700-30));
	}
	else if (shape.getPosition().y == 0 && shape.getPosition().x == 0) {
		shape.setPosition(sf::Vector2f(0, 0));
	}
	else if (shape.getPosition().y >= 700 && shape.getPosition().x >= 1060) {
		shape.setPosition(sf::Vector2f(1060, 700 - 30));
	}
	else if (shape.getPosition().y <= 0 && shape.getPosition().x >= 1060) {
		shape.setPosition(sf::Vector2f(1060,0));
	}

	
}


void player::update_position()
{
	shape.setPosition(shape.getPosition());
	//cout << (shape.getPosition().x) << " " << (shape.getPosition().y) << endl;;
}

void player::updatemovement()
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {

		shape.move(-spreed,0);
		a = 1;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 1, 64, 64));
		r++;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		shape.move(spreed, 0);
		a = 2;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 3, 64, 64));
		r++;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		
		shape.move(0,-spreed);
		a = 3;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 0, 64, 64));
		r++;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		shape.move(0, spreed);
		a = 4;
		shape.setTextureRect(sf::IntRect(r * 64, 64 * 2, 64, 64));
		r++;

	}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) {
		shape.setPosition(800.0f, 70.0f);
	}
	
	if (r == 8) {
		r = 0;
	}
}
