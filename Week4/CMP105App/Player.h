#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject
{
public:

    Player();
    ~Player();

    void handleInput(float dt); //??? float dt why? do you always need to pass it in?
    void update(float dt);

    sf::Texture mushroom;
};