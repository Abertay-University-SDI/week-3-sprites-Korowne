#include "Background.h"

Background::Background()
{
	bg.loadFromFile("gfx/Level1_1.png");
	setTexture(&bg);

	setSize(sf::Vector2f(11038, 675));
}

Background::~Background()
{
}

void Background::setWindow(sf::RenderWindow* wnd)
{
	window = wnd;
}

void Background::handleInput(float dt)
{
	sf::View v = window->getView();					// so it creates a temp variable for veiw to change within
	if (input->isKeyDown(sf::Keyboard::Space))		// all the changes happen,
	{
		v.setCenter(v.getCenter().x + 5, v.getCenter().y);
	}
	window->setView(v);		// then you set/reset those changes after each run through.
}