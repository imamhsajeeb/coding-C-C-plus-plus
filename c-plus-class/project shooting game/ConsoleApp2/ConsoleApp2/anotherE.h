#include<SFML\Graphics.hpp>
#include<cstdlib>
#include<iostream>
class anotherE
{
protected:
	sf::Time time;
	sf::Clock clock;
	sf::Time time1 ;
	sf::Clock clock1;
	int r=0;
	
public:
	int attackdamege = 2;
	sf::RectangleShape shape;
	sf::Texture tex;
	anotherE();
	~anotherE();
	
	void positionUP();
	void draw(sf::RenderWindow & window);

	void sprite();
	
};

