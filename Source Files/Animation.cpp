#include <SFML/Graphics.hpp>

#include "Animation.hpp"

Animation::Animation() : _source(0, 0)
{	
}

sf::Sprite Animation::movement(sf::Sprite playerSprite)
{
	_sprite = playerSprite;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		_source.y = Down;
		_sprite.move(0, 1);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		_source.y = Left;
		_sprite.move(-1, 0);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		_source.y = Right;
		_sprite.move(1, 0);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		_source.y = Up;
		_sprite.move(0, -1);
	}

	_sprite.setTextureRect(sf::IntRect(_source.x * 32, _source.y * 32, 32, 32));

	_source.x++;
	if (_source.x * 32 >= _sprite.getGlobalBounds().width)
		_source.x = 0;

	return _sprite;
}