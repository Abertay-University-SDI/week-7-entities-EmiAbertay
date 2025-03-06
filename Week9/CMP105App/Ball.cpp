#include "Ball.h"

Ball::Ball()
{

	sf::Vector2f velocity(0, 0);
}

Ball::~Ball()
{
}

void Ball::update(float dt)
{
	move(velocity * dt);
}
