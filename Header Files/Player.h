#pragma once

#include <SFML/Graphics.hpp>

#include "Entity.h"
#include "Animation.hpp"

class Player : public Entity, public Animation
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