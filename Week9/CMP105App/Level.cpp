#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	Ball_Manager BallManager; 

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

	if (input->isPressed(sf::Keyboard::Space))
	{
		BallManager.spawn();
		
		std::cout << "Test" << std::endl;


	}

}

// Update game objects
void Level::update(float dt)
{
	BallManager.update(dt);
}

// Render level
void Level::render(sf::RenderWindow* window)
{
	beginDraw();
	
	endDraw();
}
