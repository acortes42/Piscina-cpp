#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
    return ;
}

Enemy::Enemy(const Enemy &other)
{
    *this = other;
    return ;
}

Enemy::~Enemy(void)
{
    return;
}

std::string Enemy::getType(void) const
{
	return (this->type);
}

int Enemy::getHP(void) const
{
	return (this->hp);
}

void Enemy::takeDamage(int x)
{
    if (this->hp >= x)
        this->hp -= x;
    else if (this->hp < x)
        this->hp = 0;
    return ;   
}