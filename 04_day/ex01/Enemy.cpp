#include "Enemy.hpp"

Enemy::Enemy()
{
    this->hp = 1;
    this->type = "none";
    return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
    return ;
}

Enemy::Enemy(const Enemy &other)
{
    this->hp = other.hp;
    this->type = other.type;
    return ;
}

Enemy &Enemy::operator = (const Enemy &other)
{
    this->hp = other.hp;
    this->type = other.type;
    return (*this);
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
    {
        std::cout << "The enemy is dead" << std::endl;
        this->hp = 0;
    } 
    return ;   
}