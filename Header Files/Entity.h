#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Entity : public sf::Drawable, public sf::Transformable
{

    public:
        Entity(); //ctor

        /*________Getters________*/
        sf::Vector2f getVelocity();
        sf::Vector2f getPosition();

        /*________Setters________*/
        void Velocity(sf::Vector2f velocity);
        void Position(sf::Vector2f position);

    private:
        sf::Vector2f _velocity;
        sf::Vector2f _position;
        sf::String _name;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // ENTITY_H_INCLUDED
