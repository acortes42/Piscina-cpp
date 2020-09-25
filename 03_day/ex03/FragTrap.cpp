#include "FragTrap.hpp"

FlagTrap::FlagTrap(void)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = this->getName();
    this->meleAttackDmg = 30;
    this->rangedAttackDmg = 20;
    this->armorDamageReduction = 5;
    std::cout << "FR4G-TP " << this->name << " has been created. Sorry for that!!!" << std::endl;
}

FlagTrap::FlagTrap(std::string name)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = name;
    this->meleAttackDmg = 30;
    this->rangedAttackDmg = 20;
    this->armorDamageReduction = 5;
    std::cout << "FR4G-TP " << this->name << " has been created. Sorry for that!!!" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other)
{
    *this = other;
    return ;
}

FlagTrap::~FlagTrap(void)
{
    std::cout << "FR4G-TP " << this->name << " has been transfered to a better place. Or has been destroyed. Nevermind, who cares about that things?" << std::endl;
    return;
}

unsigned int FlagTrap::vaulthunter_dot_exe(std::string const & target)
{
    unsigned int randNum;
    std::string  actionList[5];

    if (this->hitPoints == 0)
    {
        std::cout << "FR4G-TP "<< this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }
    if (this->energyPoints == 0 || this->energyPoints < 25)
    {
        std::cout << "FR4G-TP "<< this->name << " don't have enought energy to perform this attack" << std::endl;
        return (0);
    }
    actionList[0] = " think about how Ghandi would act in this situation. The FR4G-TP acts with a totally unnecessary violence";
    actionList[1] = " hate use the force for this type the problems. The FR4G-TP pays a mercenary to hit the target";
    actionList[2] = " prays for help. The FR4G-TP accidentaly syntonyce a radio show about war topics. The FR4G-TP shoots the target.";
    actionList[3] = " hit the objective with a ladder.";
    actionList[4] = " choose the way of the heroes. The FR4G-TP escape from the danger for now";

    
    srand (this->randomBuilder());
    randNum = std::rand() % 5;
    std::cout << this->name << actionList[randNum] << std::endl;
    if (randNum == 0 || randNum == 1 || randNum == 3)
    {
        this->meleeAttack(target);
        this->meleeAttack(target);
        this->meleeAttack(target);
    }
    else if (randNum == 2)
    {
        this->rangedAttack(target);
        this->rangedAttack(target);
    }
    else
        std::cout << this->name << " choose attack in another moment."<< std::endl;
    this->energyPoints -= 25; 
    return (1);
}