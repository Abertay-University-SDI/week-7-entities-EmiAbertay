#include "Ball_Manager.h"

Ball_Manager::Ball_Manager()
{


	Spawn_Point = sf::Vector2f(400, 200);
	Ball_Texture.loadFromFile("gfx/Beach_Ball.png");

	for (int i = 0; i < 20; i++) {

		Balls.push_back(Ball());
		Balls[i].setAlive(false);
		Balls[i].setTexture(&Ball_Texture);
		Balls[i].setSize(sf::Vector2f(100, 100));

	}
}

Ball_Manager::~Ball_Manager()
{
}

void Ball_Manager::spawn()
{

	for (int i = 0; i < Balls.size(); i++) {


		if (!Balls[i].isAlive()) {

			Balls[i].setAlive(true);
			Balls[i].setVelocity(rand() % 200 - 100, rand() % 200 - 100);
			Balls[i].setPosition(Spawn_Point);
			return;

		}


	}


}

void Ball_Manager::update(float dt)
{

	for (int i = 0; i < Balls.size(); i++) {



		if (Balls[i].isAlive()) {

			Balls[i].update(dt);

		}
	}

	deathCheck();

}

void Ball_Manager::deathCheck()
{

	for (int i = 0; i < Balls.size(); i++)
	{
		if (Balls[i].isAlive())
		{
			if (Balls[i].getPosition().x < -100)
			{
				Balls[i].setAlive(false);
			}
			if (Balls[i].getPosition().x > 800)
			{
				Balls[i].setAlive(false);
			}
			if (Balls[i].getPosition().y < -100)
			{
				Balls[i].setAlive(false);
			}
			if (Balls[i].getPosition().y > 600)
			{
				Balls[i].setAlive(false);
			}
		}
	}

}

void Ball_Manager::render(sf::RenderWindow* window)
{


	for (int i = 0; i < Balls.size(); i++) {



		if (Balls[i].isAlive()) {

			window->draw(Balls[i]);

		}
	}



}
