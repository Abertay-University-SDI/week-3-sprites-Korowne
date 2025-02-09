#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	Background();
	~Background();

	void handleInput(float dt);
	void setWindow(sf::RenderWindow* wnd);	// window related things must always be referenced
	
	sf::Texture bg;
	sf::RenderWindow* window;
};