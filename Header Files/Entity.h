#pragma once

#include <SFML/Graphics.hpp>
#include <exception>
#include <string>

enum class Type
{
	Player,
	PNJ, 
	Mob,
};

class Entity : public sf::Drawable, public sf::Transformable
{

    public:
        Entity(std::string const& filename); //ctor

        /*________Getters________*/
        sf::Vector2f getVelocity();
        sf::Vector2f getPosition();
		sf::Sprite getSprite();
		int getHealth();

        /*________Setters________*/
        void Velocity(sf::Vector2f velocity);
        void Position(sf::Vector2f position);
		void health(int health);

    private:
		int _health;
        sf::Vector2f _velocity;
        sf::Vector2f _position;
        sf::String _name;
        sf::Texture _texture;
		sf::Sprite _sprite;
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};