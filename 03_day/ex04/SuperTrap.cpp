#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

SuperTrap::SuperTrap(void): NinjaTrap()
{
    this->name = this->getName();
    std::cout << this->name << ", the SuperTrap has been created. Another one, another problem." << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    FlagTrap    flag;
    NinjaTrap   nin;

    this->hitPoints = flag.getHitPoints();
    this->maxHitPoints = flag.getMaxHitPoints();
    this->energyPoints = nin.getEnergyPoints();
    this->maxEnergyPoints = nin.getMaxEnergyPoints();
    this->level = 1;
    this->name = name;
    this->meleAttackDmg = nin.getMeleeAttack();
    this->rangedAttackDmg = flag.getRangedAttack();
    this->armorDamageReduction = flag.getArmorReduction();
    std::cout << this->name << ", the SuperTrap, has been created. Another one, another problem." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &other)
{
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleAttackDmg = other.meleAttackDmg;
    this->rangedAttackDmg = other.rangedAttackDmg;
    this->armorDamageReduction = other.armorDamageReduction;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &other)
{
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->meleAttackDmg = other.meleAttackDmg;
    this->rangedAttackDmg = other.rangedAttackDmg;
    this->armorDamageReduction = other.armorDamageReduction;
    return (*this);
}

SuperTrap::~SuperTrap(void)
{
    std::cout << this->name << " is tortured until a horrible dead" << std::endl;
    return;
}