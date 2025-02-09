#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	bg.setInput(in);	// need to remember this whenever input is involved
	bg.setWindow(hwnd);
	p1.setInput(in);
	e1.setWindow(hwnd);

	// initialise game objects
	//texture.loadFromFile("gfx/Mushroom.png");
	//textureGoomba.LoadFromFile("gfx/goomba.png");

	/*testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);*/				// to more easily understand how to initialize

	// I think its just the 'adding' of things and the free thinking thats throwing me off
	// the moment free thinkng is involved, I get screwed

	//e1.setInput(in);
	//enemy1.setTexture(&texture);	// must be referenced
	// so I need to give it a presence
	//e1.setSize(sf::Vector2f(100, 100));	// why must this be a vector
	//e1.setPosition(sf::Vector2f(100, 100));

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

	p1.handleInput(dt);
	bg.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	p1.update(dt);
	e1.update(dt);
	std::cout << "v x: " << p1.getVelocity().x << "v y: " << p1.getVelocity().y << std::endl;
}

// Render level
void Level::render()
{ 
	beginDraw();

	window->draw(bg);
	window->draw(testSprite);
	window->draw(p1);
	window->draw(e1);

	endDraw();
}
