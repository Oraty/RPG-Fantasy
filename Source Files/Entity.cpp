#include <SFML/Graphics.hpp>
#include <iostream>

#include "Entity.h"

Entity::Entity(std::string const& filename)
{
	if (!_texture.loadFromFile(filename))
		std::cerr << "Unable to load : " << filename << std::endl;

	_sprite.setTexture(_texture);
}

sf::Vector2f Entity::getVelocity()
{
    return _velocity;
}

sf::Vector2f Entity::getPosition()
{
    return _position;
}

int Entity::getHealth()
{
	return _health;
}

sf::Sprite Entity::getSprite()
{
	return _sprite;
}

void Entity::Velocity(sf::Vector2f velocity)
{
    _velocity = velocity;
}

void Entity::Position(sf::Vector2f position)
{
    _position = position;
}

void Entity::health(int health)
{
	_health = health;
}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	states.texture = &_texture;
	target.draw(_sprite, states);
}

