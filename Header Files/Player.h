#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Entity.h"

class Player : public Entity
{

    public:
        Player(); //ctor

        void animation(); // move + animation
        void attack(Entity & entity);

        /*________Getters________*/
        int getDamage();

        /*________Setters________*/
        void Damage(int damage);

    private:
        int _damage;

};

#endif // PLAYER_H_INCLUDED
