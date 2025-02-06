#pragma once
#include "Framework/GameObject.h"
class Player :
    public GameObject
{
public:

    Player();
    void handleInput();
};