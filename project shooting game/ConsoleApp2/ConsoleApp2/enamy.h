#include<iostream>

#include<SFML\Graphics.hpp>
class enamy
{
private:
	sf::Vector2f position;
	int r = 0;
	sf::Texture tex;
public:
	float spreed = 10;
		int hp = 30;
	int maxhp = 30;
	int attackdemage = 1;
	
public:
int a = 0;;
	sf::RectangleShape shape;
	enamy();
	~enamy();
	void sethp(int h) { hp += h; }
	int gethp() { return hp; }
	int getattackdemage() { return attackdemage; }
	void cantgo();
	void update_position();
	void updatemovement2();
};

