#pragma once

#include <SFML/Graphics.hpp>

#include "Entity.h"

class Player : public Entity
{

    public:
        Player(); //ctor

        /*________Getters________*/
        int getDamage();

        /*________Setters________*/
        void Damage(int damage);

    private:
        int _damage;
		sf::Sprite _player;

};