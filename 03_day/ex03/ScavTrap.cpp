#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->name = this->getName();
    this->meleAttackDmg = 20;
    this->rangedAttackDmg = 15;
    this->armorDamageReduction = 3;
    std::cout << this->name << ", the ScavTrap has been created. Another one, another problem." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->name = name;
    this->meleAttackDmg = 20;
    this->rangedAttackDmg = 15;
    this->armorDamageReduction = 3;
    std::cout << this->name << ", the ScavTrap, has been created. Another one, another problem." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    *this = other;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << this->name << " is tortured until a horrible dead" << std::endl;
    return;
}

unsigned int ScavTrap::challengeNewcomer(std::string const & target)
{
    unsigned int randNum;
    int          takeD;
    std::string  actionList[5];

    if (this->hitPoints == 0)
    {
        std::cout << "Scav-TP "<< this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }

    actionList[0] = " fight for his honor.";
    actionList[1] =  " go to a primal planet for flowers.";
    actionList[2] = " try to be a better robot and help in differents affairs";
    actionList[3] = " it's having a wonderful day until has been shooted.";
    actionList[4] = " start a travel to conquere the dark dimension. NO REWARD. 50% posibility of a paintful dead";
    srand (this->randomBuilder());
    randNum = std::rand() % 5;
    std::cout << this->name << actionList[randNum] << " "<< " receives damage from " << target << " attack" << std::endl;
    takeD = std::rand() % 101;
    if (randNum == 1 || randNum == 2)
        this->takeDamage(takeD);
    else if(randNum == 4 && takeD % 2 == 1)
        this->takeDamage(100000);
    else
        this->takeDamage(takeD);
    return (1);
}