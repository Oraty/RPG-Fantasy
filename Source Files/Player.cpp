#include <SFML/Graphics.hpp>

#include "Player.h"

Player::Player() : Entity("Media/Textures/Player.png")
{
	_player = getSprite();
}

int Player::getDamage()
{
    return _damage;
}

void Player::Damage(int damage)
{
    _damage = damage;
}
