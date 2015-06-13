#include "Entity.h"

Entity::Entity(std::string const& filename)
{
	if (!_texture.loadFromFile(filename))
		throw std::runtime_error("Unable to load : " + filename);
}

sf::Vector2f Entity::getVelocity()
{
    return _velocity;
}

sf::Vector2f Entity::getPosition()
{
    return _position;
}

void Entity::Velocity(sf::Vector2f velocity)
{
    _velocity = velocity;
}

void Entity::Position(sf::Vector2f position)
{
    _position = position;
}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
}

