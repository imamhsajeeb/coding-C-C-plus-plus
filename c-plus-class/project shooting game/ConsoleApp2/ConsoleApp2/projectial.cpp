#include "stdafx.h"
#include "projectial.h"
#include<SFML\Graphics.hpp>
//#include"enti.h"
projectial::projectial()
{
	tex.loadFromFile("fairball.gif");
	tex.setSmooth(true);
	shape1.setTexture(&tex);
	shape1.setRadius(5.7f);
	shape1.setPointCount(50);
	shape1.setPosition(0, 0);

	//shape1.setFillColor(sf::Color::White);


}


projectial::~projectial()
{
}

void projectial::movement(int x)
{
	if (x == 2) {
shape1.move(+spreedp, 0);
	}
	else if (x==1) {
		shape1.move(-spreedp, 0);

	}
	else if (x == 4) {
		shape1.move(0,+spreedp);

	}
	else if (x == 3) {

		shape1.move(0,-spreedp);
	}
	else {
		shape1.move(+spreedp, 0);
	}
	
}
