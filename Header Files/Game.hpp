#pragma once

#include <SFML/Graphics.hp>

sf::Time const TimePerFrame = sf::seconds(1.f / 60.f);

class Game
{
public :
	Game();
	void run();

private :
	void processEvents();
	void update(sf::Time deltaTime);
	void render();

private :
	sf::RenderWindow _window;
};