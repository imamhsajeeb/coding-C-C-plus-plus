/*ABDUR_RAHMAN_TUMZIED*/
/*Hasibul Islam */
/*Imam Hossain Sajeeb */
/*****************************************************************************************/
/*  note thsi project file run only on virtual studio 2017  ,
and if any problem occor while runig
 of thes project soution  ->go to proparits
 1-> c/c++ -> general ->  Additional include directories -> edits ->( $(SolutionDir)\..\ex_lib\SFML\include )pest this

 2-> Linker -> general ->  Additional Libray  directories -> edits ->( $(SolutionDir)\..\ex_lib\SFML\lib )pest this

 3->Linker ->input -> Additional Dependencies -> edit >

 sfml-main-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-system-d.lib
sfml-audio-d.lib               <- copy and pest this


/*****************************************************************************************/


#include "stdafx.h"
#include<SFML\Graphics.hpp>
#include"player.h"
#include<vector>
#include"projectial.h"
#include<iostream>
#include"enamy.h"
#include"anotherE.h"
#include"item.h"

sfml - main - d.lib
sfml - graphics - d.lib
sfml - window - d.lib
sfml - system - d.lib
sfml - audio - d.lib

using namespace std;
int main()
{


	sf::RenderWindow window(sf::VideoMode(1080, 700), "ITS A GAME !!!");
	window.setFramerateLimit(60);


	/*time*/
	sf::Time time;
	sf::Time time1;
	sf::Clock clock;
	sf::Clock clock1;
	sf::Time time3;
	sf::Clock clock3;
	sf::Time time4;//item
	sf::Clock clock4;//item
	sf::Time time5;//item
	sf::Clock clock5;//item
	sf::Time time6;//proj
	sf::Clock clock6;//proj
	sf::Time time7;//enproj
	sf::Clock clock7;//enproj
	/*font*/
	sf::Font font;
	font.loadFromFile("kongtext.ttf");
	sf::Text text1;
	sf::Text text2;
	sf::Text text3;
	sf::Text text4;
	text1.setFont(font);
	text1.setPosition(sf::Vector2f(2, 0));
	text1.setCharacterSize(30);
	text1.setFillColor(sf::Color::Yellow);

	text2.setFont(font);
	text2.setPosition(sf::Vector2f(779, 0));
	text2.setCharacterSize(30);
	text2.setFillColor(sf::Color::Yellow);

	text3.setFont(font);
	text3.scale(1, 1.5);
	text3.setPosition(sf::Vector2f(90, 338));
	text3.setCharacterSize(70);
	text3.setFillColor(sf::Color::Red);
	text3.setString("player2 WIN!");

	text4.setFont(font);
	text4.scale(1.0, 1.5);
	text4.setPosition(sf::Vector2f(90, 338));
	text4.setCharacterSize(70);
	text4.setFillColor(sf::Color::Red);
	text4.setString("player1 WIN!");
	/*texter*/
	sf::Texture tex;
	tex.loadFromFile("Generic.jpg");
	sf::Sprite texSprite;
	texSprite.setTexture(tex);
	texSprite.setColor(sf::Color(255, 255, 255, 128));
	/*entity*/
	player player1;
	enamy enamy1;
	item item1;
	/*anotherE an;
	anotherE en;*/
	anotherE wall[20];
	//projectial;
	projectial projs;
	projectial projs2;
	vector<projectial> arrayprojs;
	vector<projectial> arrayprojes1;
	vector<item> arryaItem;
	vector<int> playPosi;
	vector<int> enamyposi;
	/*mouse*/
	sf::Mouse mouse;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)

				window.close();
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.close();
			}
		}
		/******************/
		text1.setString("Player2 Hp\n" + to_string(enamy1.hp));
		text2.setString("Player1 Hp\n" + to_string(player1.hp));
		/*********time*********/
		time1 = clock1.getElapsedTime();
		time3 = clock3.getElapsedTime();
		time4 = clock4.getElapsedTime();
		time5 = clock5.getElapsedTime();
		time6 = clock6.getElapsedTime();
		time7 = clock7.getElapsedTime();
		/*playerProj push back*/
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad0)) {
			if (time6.asSeconds() > 0.05) {
				projs.shape1.setPosition(sf::Vector2f(player1.shape.getPosition().x + player1.shape.getSize().x / 2, player1.shape.getPosition().y + player1.shape.getSize().x / 2));
				arrayprojs.push_back(projs);
				playPosi.push_back(player1.a);
				//cout << player1.a << endl;
				time6 = clock6.restart();
			}
		}
		/*enamyProj_push back*/
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			if (time7.asSeconds() > 0.05) {
			projs2.shape1.setPosition(sf::Vector2f(enamy1.shape.getPosition().x + enamy1.shape.getSize().x / 2, enamy1.shape.getPosition().y + enamy1.shape.getSize().x / 2));
			arrayprojes1.push_back(projs2);
			enamyposi.push_back(enamy1.a);
			time7 = clock7.restart();
			}

		}
		if (time4.asSeconds() > 20.0) {
			arryaItem.push_back(item1);
			time4 = clock4.restart();
		}
		/*position update*/
		player1.cantgo();
		enamy1.cantgo();
		//cout << time.asSeconds()<<endl;
		player1.update_position();
		enamy1.update_position();
		window.clear(sf::Color(53, 0, 0));
		/* ********* update ********************** */



		//cout << mouse.getPosition(window).x << " "<< mouse.getPosition(window).y << endl;;
		player1.updatemovement();
		enamy1.updatemovement2();
		/*position*/
		for (int i = 0; i < 20; i++) {
			wall[i].positionUP();
			if (player1.shape.getGlobalBounds().intersects(wall[i].shape.getGlobalBounds())) {
				if (time1.asSeconds() > 5.0f) {
					player1.hp -= wall[i].attackdamege;
					text2.setString("Player1 Hp\n" + to_string(player1.hp));
					time1 = clock1.restart();
				}
				}
			if (enamy1.shape.getGlobalBounds().intersects(wall[i].shape.getGlobalBounds())) {
				if (time3.asSeconds() > 5.0f) {
					enamy1.hp -= wall[i].attackdamege;
					text1.setString("Player2 Hp\n" + to_string(enamy1.hp));

					time3 = clock3.restart();
				}
			}

		}



		/*draw*/

		window.draw(texSprite);
		/*walldraw*/
		for (size_t i = 0; i < 20; i++)
		{
			wall[i].sprite();
			wall[i].draw(window);

		}
		window.draw(player1.shape);
		window.draw(enamy1.shape);

		/****projectial colide withe player2 and player1 ****/

		/*player proj*/

		for (size_t i = 0; i < arrayprojs.size(); i++)
		{
			arrayprojs[i].movement(playPosi[i]);
			//cout << playPosi[i] << endl;
			window.draw(arrayprojs[i].shape1);
			if (

				(arrayprojs[i].shape1.getPosition().x > 1080 - 11 ||
				arrayprojs[i].shape1.getPosition().x < 0 + 1 ||
				arrayprojs[i].shape1.getPosition().y < 0 + 1 ||
				arrayprojs[i].shape1.getPosition().y >= 720 - 10)

			)
			{
				arrayprojs.erase(arrayprojs.begin() + i);
				playPosi.erase(playPosi.begin() + i) ;
			}
			else if (
				arrayprojs[i].shape1.getGlobalBounds().intersects(enamy1.shape.getGlobalBounds()))
			{
				arrayprojs.erase(arrayprojs.begin() + i);
				playPosi.erase(playPosi.begin() + i);
				enamy1.hp -= player1.attackdemage;
				text1.setString("Player2 Hp\n" + to_string(enamy1.hp));
			}



		}

		for (size_t j = 0; j <20; j++)
		{
		for (size_t i = 0; i < arrayprojs.size(); i++)
		{

				if (arrayprojs[i].shape1.getGlobalBounds().intersects(wall[j].shape.getGlobalBounds())) {
					arrayprojs.erase(arrayprojs.begin() + i);
					playPosi.erase(playPosi.begin() + i);
				}
			}
		}for (size_t i = 0; i < arrayprojs.size(); i++)
		{
			if (enamy1.shape.getGlobalBounds().intersects(arrayprojs[i].shape1.getGlobalBounds())) {
				enamy1.hp -= player1.attackdemage;
				text1.setString("Player2 Hp\n" + to_string(enamy1.hp));

			}
		}




/*enamy proj*/
for (size_t i = 0; i < arrayprojes1.size(); i++)
{
	arrayprojes1[i].movement(enamyposi[i]);
	window.draw(arrayprojes1[i].shape1);
	if (arrayprojes1[i].shape1.getPosition().x > 1080 - 11 ||
		arrayprojes1[i].shape1.getPosition().x < 0 + 1 ||
		arrayprojes1[i].shape1.getPosition().y < 0 + 1 ||
		arrayprojes1[i].shape1.getPosition().y >= 720 - 10)
	{
		arrayprojes1.erase(arrayprojes1.begin() + i);
		enamyposi.erase(enamyposi.begin() + i);

	}
	else if (arrayprojes1[i].shape1.getGlobalBounds().intersects(player1.shape.getGlobalBounds())) {

		arrayprojes1.erase(arrayprojes1.begin() + i);
		enamyposi.erase(enamyposi.begin() + i);
		player1.hp -= enamy1.attackdemage;
		text2.setString("Player1 Hp\n" + to_string(player1.hp));
	}

}
for (size_t j = 0; j <20; j++)
{
	for (size_t i = 0; i < arrayprojes1.size(); i++)
	{

		if (arrayprojes1[i].shape1.getGlobalBounds().intersects(wall[j].shape.getGlobalBounds())) {
			arrayprojes1.erase(arrayprojes1.begin() + i);
			enamyposi.erase(enamyposi.begin() + i);
		}
	}
}

for (size_t i = 0; i <arryaItem.size(); i++)
{


	arryaItem[i].reandomplace();
	window.draw(arryaItem[i].rect);
	if (player1.shape.getGlobalBounds().intersects(arryaItem[i].rect.getGlobalBounds())) {
		if (player1.hp < 30&& player1.hp!=0) {
			player1.hp += arryaItem[i].hp;
			arryaItem.erase(arryaItem.begin() + i);
		}
		 if(player1.hp <= 0)
		{
			player1.hp = 0;
		}

		}
	else if (enamy1.shape.getGlobalBounds().intersects(arryaItem[i].rect.getGlobalBounds())) {
		if (enamy1.hp < 30 && enamy1.hp != 0) {
			enamy1.hp += arryaItem[i].hp;
			arryaItem.erase(arryaItem.begin() + i);
		} if (enamy1.hp <= 0)
		{
			enamy1.hp = 0;
		}
	}
	else if (time5.asSeconds() > 30) {
		arryaItem.erase(arryaItem.begin() + i);
		time5 = clock5.restart();
	}
}
	 if (player1.hp>30)
	{
		player1.hp = 30;

	}
	 else if (player1.hp<=0)
	 {
		 player1.hp = 0;

	 }
	 if (enamy1.hp>30)
	 {
		 enamy1.hp = 30;

	 }
	 else if (enamy1.hp <= 0)
	 {
		 enamy1.hp = 0;

	 }
//window.draw(item1.rect);

window.draw(text1);
window.draw(text2);
if (player1.hp <= 0) {
	window.draw(text3);
	player1.hp = 0;
}
else if (enamy1.hp <= 0) {
	window.draw(text4);
	enamy1.hp = 0;
}


		window.display();
	}
    return 0;
}

