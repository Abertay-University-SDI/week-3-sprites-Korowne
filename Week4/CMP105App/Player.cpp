#include "Player.h"

Player::Player()
{

}

void Player::handleInput()
{
	if (input->isKeyDown(sf::Keyboard::A))
		move(sf::Vector2f(-2, 0));
	if (input->isKeyDown(sf::Keyboard::D))
		move(sf::Vector2f(2, 0));
	if (input->isKeyDown(sf::Keyboard::W))	// some reason its a -2 to go up in the y axis.. noted (i thinks)
		move(sf::Vector2f(0, -2));
	if (input->isKeyDown(sf::Keyboard::S))
		move(sf::Vector2f(0, 2));
}