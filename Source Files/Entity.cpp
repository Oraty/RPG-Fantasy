#include "Entity.h"

Entity::Entity(Type type)
{
    if(type == Player)
    {
        if(!_texture.loadFromFile("Player.png"))
            throw std::runtime_error("Unable to load texture: Player.png");
    }
    else if(type == PNJ)
    {
        if(!_texture.loadFromFile("PNJ.png"))
            throw std::runtime_error("Unable to load texture: PNJ.png");
    }
    else if(type == Mob)
    {
        if(!_texture.loadFromFile("Mob.png"))
            throw std::runtime_error("Unable to load texture: Mob.png");
    }
    else
    {
        if(!_texture.loadFromFile("ERROR.png"))
            throw std::runtime_error("Unable to load texture: ERROR.png");
    }
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

