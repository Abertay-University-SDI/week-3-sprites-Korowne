#include "Cursor.h"

Cursor::Cursor()
{
	icon.loadFromFile("gfx/icon.png");
	setTexture(&icon);

	setSize(sf::Vector2f(48, 48));	// set size of cursor to be the same size as the image 1:1
}

Cursor::~Cursor()
{

}

void Cursor::handleInput(float dt)
{
	float mouseX = input->getMouseX();
	float mouseY = input->getMouseY();

	setPosition(mouseX - 24, mouseY - 24);	// sets the actual cursor to be in the centre of the image
}
