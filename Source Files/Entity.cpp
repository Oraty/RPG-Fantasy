#include "Header Files/Entity.h"

Entity::Entity()
{

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

