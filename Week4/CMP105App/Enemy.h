#pragma once
#include "Framework/GameObject.h"
class Enemy :
    public GameObject
{
public:
    Enemy();
    void enemyMove(sf::Vector2f, sf::Vector2f);
};

