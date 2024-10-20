#include<SFML\Graphics.hpp>
#include<iostream>
//#include"enti.h"
using namespace std;
class player
{
private:	
	sf::Vector2f position;
	sf::Texture tex;
	int r = 0;
public:
	float spreed=10;
	int hp=30;
	int maxhp=30;
	int attackdemage=1;
public:

	int a = 0;;
	sf::RectangleShape shape;
	player();
	void sethp(int h) { hp = h; }
	int gethp() { return hp; }
	int getattackdemage() { return attackdemage; }
	void cantgo();
	float getspreed() {
		return spreed;
	}

	
	void update_position();
	void updatemovement();


};

