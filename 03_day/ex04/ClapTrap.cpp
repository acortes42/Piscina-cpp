#include "ClapTrap.hpp"

int ClapTrap::randomBuilder()
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

std::string ClapTrap::randomName()
{
    int         n1;
    int         n2;
    int         n3;
    std::string vocals;
    std::string consonants;
    std::string ret;

    vocals = "aeiou";
    consonants = "qwrtypsdfghjklzxcvbnm";
    ret = "";
    srand (randomBuilder());
    n3 = std::rand() % 4 + 3;
    while (n3 > 0)
    {
        n1 = std::rand() % vocals.length();
        n2 = std::rand() % consonants.length();
        if (n3 % 2 == 0)
            ret += vocals[n1];
        else
            ret += consonants[n2];
        n3--;
    }
    ret[0] = toupper(ret[0]);
    return (ret);
};

ClapTrap::ClapTrap(void)
{
    this->name = ClapTrap::randomName();
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleAttackDmg = 30;
    this->rangedAttackDmg = 20;
    this->armorDamageReduction = 5;
    std::cout << this->name << ", the ClapTrap has been created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleAttackDmg = 30;
    this->rangedAttackDmg = 20;
    this->armorDamageReduction = 5;
    std::cout << this->name << ", the ClapTrap, has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->name << " is recycled" << std::endl;
    return;
}

unsigned int ClapTrap::rangedAttack(std::string const & target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }
    std::cout << this->name << " attacks " << target << " at range, causing "<< this->rangedAttackDmg << " points of damage!" << std::endl;
    return (this->rangedAttackDmg);
}

unsigned int ClapTrap::meleeAttack(std::string const & target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is dead. Don't push him to work in this state" << std::endl;
        return (0);
    }
    std::cout << this->name << " attacks " << target << " at melee, causing "<< this->meleAttackDmg << " points of damage!" << std::endl;
    return (this->meleAttackDmg);
}

unsigned int ClapTrap::takeDamage(unsigned int damage)
{
    unsigned int realDamage;

    realDamage = (this->armorDamageReduction < damage) ? damage - this->armorDamageReduction : 0;
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead, but...who don't feel the necessity of hit a dead Scav-TP" << std::endl;
        return (0);
    }
    if (this->hitPoints < realDamage)
    {
        std::cout << this->name << " receives a deadly blow" << std::endl;
        this->hitPoints = 0;
        return (0);
    }
    std::cout << this->name << " recive " << realDamage << " points of damage! It would resist " 
        << this->hitPoints - realDamage << " points of damage until break" << std::endl;
    this->hitPoints -= realDamage;
    return (this->hitPoints);
}

unsigned int ClapTrap::beRepaired(unsigned int restauration)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead. But thanks for try to save his live" << std::endl;
        return (0);
    }
    if ((this->maxHitPoints - this->hitPoints) < restauration)
    {
        std::cout << this->name << " feels the power in his circuits. It's fully repaired now." << std::endl;
        this->hitPoints = this->maxHitPoints;
        return (0);
    }
    std::cout << this->name << " is repaired for " << restauration << " hit points." << std::endl;
    this->hitPoints += restauration;
    return (this->hitPoints);
}

std::string const &ClapTrap::getName(void)
{
	return (this->name);
}

unsigned int const &ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

unsigned int const &ClapTrap::getMaxHitPoints(void)
{
	return (this->maxHitPoints);
}

unsigned int const &ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}

unsigned int const &ClapTrap::getMaxEnergyPoints(void)
{
	return (this->maxEnergyPoints);
}

unsigned int const &ClapTrap::getMeelePoints(void)
{
	return (this->meleAttackDmg);
}

unsigned int const &ClapTrap::getRangedPoints(void)
{
	return (this->rangedAttackDmg);
}

unsigned int const &ClapTrap::getArmorReduction(void)
{
	return (this->armorDamageReduction);
}
