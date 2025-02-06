#include "Enemy.h"

Enemy::Enemy()
{

}

void Enemy::enemyMove(sf::Vector2f pos, sf::Vector2f size)
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
}
