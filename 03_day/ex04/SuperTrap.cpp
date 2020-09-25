#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

SuperTrap::SuperTrap(void)
{
    ClapTrap    cla;
    FlagTrap    flag;
    NinjaTrap   nin;

    this->hitPoints = flag.getHitPoints();
    this->maxHitPoints = flag.getMaxHitPoints();
    this->energyPoints = nin.getEnergyPoints();
    this->maxEnergyPoints = nin.getMaxEnergyPoints();
    this->level = 1;
    this->name = cla.getName();
    this->meleAttackDmg = nin.getMeelePoints();
    this->rangedAttackDmg = flag.getRangedPoints();
    this->armorDamageReduction = flag.getArmorReduction();
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
    this->meleAttackDmg = nin.getMeelePoints();
    this->rangedAttackDmg = flag.getRangedPoints();
    this->armorDamageReduction = flag.getArmorReduction();
    std::cout << this->name << ", the SuperTrap, has been created. Another one, another problem." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &other)
{
    *this = other;
    return ;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << this->name << " is tortured until a horrible dead" << std::endl;
    return;
}