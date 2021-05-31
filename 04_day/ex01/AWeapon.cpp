#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
    this->name = "none";
    this->apcost = 0;
    this->damage = 0;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &other)
{
    this->apcost = other.apcost;
    this->name = other.name;
    this->damage = other.damage;
}

AWeapon &AWeapon::operator = (const AWeapon &other)
{
    this->apcost = other.apcost;
    this->name = other.name;
    this->damage = other.damage;
    return (*this);
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