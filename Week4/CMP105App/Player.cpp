#include "Player.h"

Player::Player()
{
	setPosition(sf::Vector2f(100, 100));
	setSize(sf::Vector2f(100, 100));

	mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&mushroom);

	setVelocity(0.f, 0.f);
}

Player::~Player()
{

}

void Player::handleInput(float dt)	// for some reason, he wants me to uh do something strange
{
	if (input->isKeyDown(sf::Keyboard::A))
	{
		setVelocity(static_cast<double>(getVelocity().x) - 0.001, getVelocity().y);
	}

	if (input->isKeyDown(sf::Keyboard::D))	// go right
	{
		setVelocity(static_cast<double>(getVelocity().x) + 0.001, getVelocity().y);
	}	// this is what the walkthrough says to do

	//if (input->isKeyDown(sf::Keyboard::Left))
		//move(sf::Vector2f(-0.5, 0));

	//if (input->isKeyDown(sf::Keyboard::Right))
		//move(sf::Vector2f(0.5, 0));

	//if (input->isKeyDown(sf::Keyboard::W))	// some reason its a -2 to go up in the y axis.. noted (i thinks)
		
	//if (input->isKeyDown(sf::Keyboard::S))
		
}

void Player::update(float dt)
{
	move(velocity);	// this variable is a protected one from GameObject.
}
