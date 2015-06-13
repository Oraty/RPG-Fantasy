#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <string>

class Entity
{

    public:
        Entity();

    private:
        vector2f _velocity;
        vector2f _position;
        std::string _name
};

#endif // ENTITY_H_INCLUDED
