#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->level = 1;
    this->name = this->getName();
    this->meleAttackDmg = 60;
    this->rangedAttackDmg = 5;
    this->armorDamageReduction = 0;
    std::cout << "NinjaTrap " << this->name << " has been created. Sorry for that!!!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = name;
    this->meleAttackDmg = 60;
    this->rangedAttackDmg = 5;
    this->armorDamageReduction = 0;
    std::cout << "NinjaTrap " << this->name << " has been created. Sorry for that!!!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other)
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

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &other)
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

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "NinjaTrap " << this->name << " live in the eternal darkness now" << std::endl;
    return;
}

unsigned int    NinjaTrap::ninjaShoebox(ClapTrap &target)
{
    unsigned int    randomNum;


    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead. But thanks for try to save his live" << std::endl;
        return (0);
    }
    else if (this->energyPoints >= 40)
    {
        std::cout << this->name << " run to the VIIIIIICTORYYYYY";
        srand (this->randomBuilder());
        randomNum =  std::rand() % 12 + 1;
        if (randomNum > 4)
        {
            std::cout << " and damage criticaly to " << target.getName() << std::endl;
            target.takeDamage(this->meleeAttack(target.getName()) * 2);
        }
        else
            std::cout << " but fall near the enemy" << std::endl;
        this->energyPoints -= 40;
    }
    else
        std::cout << this->name << " it's tired of do all the hard work"<< std::endl;
    return (1);
}

unsigned int    NinjaTrap::ninjaShoebox(FlagTrap &target)
{
    unsigned int randomNum;

    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead. But thanks for try to save his live" << std::endl;
        return (0);
    }
    else if (this->energyPoints >= 35)
    {
        std::cout << this->name << " shoots to " << target.getName() << " with a shotgun";
        srand (this->randomBuilder());
        randomNum =  std::rand() % 12 + 1;
        if (randomNum > 4)
        {
            std::cout << ", almost killing the enemy" << std::endl;
            target.takeDamage(this->getRangedAttack());
        }
        else
            std::cout << ", but fails." << std::endl;
        this->energyPoints -= 35;
    }
    else
        std::cout << this->name << " it's tired of do all the hard work"<< std::endl;
    return (1);
}

unsigned int    NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    unsigned int randomNum;

    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead. But thanks for try to save his live" << std::endl;
        return (0);
    }
    else if (this->energyPoints >= 25)
    {
        std::cout << this->name << " try to hit " << target.getName();
        srand (this->randomBuilder());
        randomNum =  std::rand() % 12 + 1;
        if (randomNum > 4)
        {
            std::cout << " with a chainsaw. That was bloody as hell" << std::endl;
            target.takeDamage(this->meleeAttack(target.getName()));
        }
        else
            std::cout << " with a flower. " << target.getName() << " start to fall in love with " << this->name << std::endl;
        this->energyPoints -= 25;
    }
    else
        std::cout << this->name << " it's tired of do all the hard work"<< std::endl;
    return (1);
}

unsigned int    NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
    unsigned int randomNum;

    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead. But thanks for try to save his live" << std::endl;
        return (0);
    }
    else if (this->energyPoints == this->maxEnergyPoints)
    {
        std::cout << this->name << " use a smoke bomb in front of " << target.getName();
        srand (this->randomBuilder());
        randomNum =  std::rand() % 12 + 1;
        if (randomNum > 4)
        {
            std::cout << " and piercing the enemy in his back with a katana" << std::endl;
            target.takeDamage(100000000);
        }
        else
            std::cout << " and run away." << std::endl;
        this->energyPoints = 0;
    }
    else
        std::cout << this->name << " it's tired of do all the hard work"<< std::endl;
    return (1);
}

int NinjaTrap::randomGenerator()
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

std::string NinjaTrap::randomName()
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
    srand (randomGenerator());
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