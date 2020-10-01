#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &other)
{
    *this = other;
    return ;
}

AWeapon::~AWeapon(void)
{
    return;
}

std::string AWeapon::getName(void) const
{
	return (this->name);
}

int AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int AWeapon::getDamage(void) const
{
	return (this->damage);
}