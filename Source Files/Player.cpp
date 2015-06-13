#include "Player.h"

Player::Player() : Entity("Player.png")
{

}

int Player::getDamage()
{
    return _damage;
}

void Player::Damage(int damage)
{
    _damage = damage;
}
