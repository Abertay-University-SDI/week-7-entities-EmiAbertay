#pragma once
#include "Ball.h"
#include <math.h>
#include <vector>

class Ball_Manager
{

public: 

	Ball_Manager();
	~Ball_Manager();

	void spawn();
	void update(float dt);
	void deathCheck();
	void render(sf::RenderWindow* window);

private:

	std::vector<Ball> Balls;
	sf::Vector2f Spawn_Point;
	sf::Texture Ball_Texture;


};

