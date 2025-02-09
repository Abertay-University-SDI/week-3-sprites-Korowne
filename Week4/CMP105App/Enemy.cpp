#include "Enemy.h"

Enemy::Enemy()
{
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));

	goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&goomba);

	setVelocity(0.f, -2.f);

}

Enemy::~Enemy()
{
}

void Enemy::setWindow(sf::RenderWindow* wnd)
{
	window = wnd;
}

void Enemy::update(float dt)
{	
	// if going down & below window
	if (getVelocity().y > 0 && getPosition().y + getSize().y > window->getSize().y)	// this is what happens when I dont know how to fucking code
	{
		setVelocity(0.f, -2.f);	// go up
	}
	if (getVelocity().y < 0 && getPosition().y < 0)
	{
		setVelocity(0.f, 2.f);	// go down
	}

	move(velocity);	// bruh if i just keep forgetting this...
}

/*void Enemy::enemyMove(sf::Vector2f pos, sf::Vector2f size)
{
	sf::Vector2f enemyDir;
	move(enemyDir);
	if (pos.x > window->getSize().x - size.x)	// too far right
		enemyDir.x *= -1;

	if (pos.x < 0)	// too far left
		enemyDir.x *= -1;

	if (pos.y > window->getSize().y - size.y)	// too far up?
		enemyDir.y *= -1;

	if (pos.y < 0)	// too far down?
		enemyDir.y *= -1;
}*/
