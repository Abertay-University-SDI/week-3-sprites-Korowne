#pragma once

#include "Framework/GameObject.h"
#include "Player.h"

class Enemy :
    public GameObject
{
public:
    Enemy();
    ~Enemy();
    void update(float dt);
    void setWindow(sf::RenderWindow* wnd);  // set window why? must be for collision

    sf::Texture goomba;
    sf::RenderWindow* window;

};