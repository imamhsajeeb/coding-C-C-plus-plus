#include<SFML\Graphics.hpp>

class projectial 
{
private:
	float spreedp=25;
public:
	sf::Texture tex;
	sf::CircleShape shape1;
	projectial();
	~projectial();
	void movement(int x);
};

