#pragma once

#include <SFML/Graphics.hpp>

enum Direction
{
	Down,
	Left,
	Right,
	Up,
};

class Animation
{
public :
	Animation();
	sf::Sprite movement(sf::Sprite playerSprite);

private :
	sf::Vector2f _source;
	sf::Sprite _sprite;
};