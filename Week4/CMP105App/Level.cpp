#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	//textureGoomba.LoadFromFile("gfx/goomba.png");

	/*testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);*/

	// I think its just the 'adding' of things and the free thinking thats throwing me off
	// the moment free thinkng is involved, I get screwed
	player1.setInput(in);
	player1.setTexture(&texture);	// must be referenced
	// so I need to give it a presence
	player1.setSize(sf::Vector2f(100, 100));	// why must this be a vector
	player1.setPosition(100, 100);

	enemy1.setInput(in);
	enemy1.setTexture(&texture);	// must be referenced
	// so I need to give it a presence
	enemy1.setSize(sf::Vector2f(100, 100));	// why must this be a vector
	enemy1.setPosition(sf::Vector2f(100, 100));

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

}

// Update game objects
void Level::update(float dt)
{
	player1.handleInput();
	enemy1.enemyMove(enemy1.getPosition(), enemy1.getSize());
}

// Render level
void Level::render()
{ 
	beginDraw();

	window->draw(testSprite);
	window->draw(player1);
	window->draw(enemy1);

	endDraw();
}
