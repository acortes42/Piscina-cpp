#include "Victim.hpp"

int Victim::randomBuilder() const
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

std::string Victim::randomName()
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

Victim::Victim(void)
{
    this->name = Victim::randomName();
    std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
}

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other)
{
    this->name = other.name;
    return ;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;
    return;
}

Victim &Victim::operator = (const Victim &other)
{
    this->name = other.name;
    return (*this);
}

std::string const &Victim::getName(void) const
{
	return (this->name);
}

std::string Victim::introduce() const
{
    unsigned int x;
    std::string str[] = {"jam", "you", "ate humans", "cats", "puppys", "be alone"};

    srand (this->randomBuilder());
    x = std::rand() % 6;
    return (str[x]);
}

std::string Victim::change() const
{
    unsigned int x;
    std::string str[] = {"cute little sheep", "better person", "corpse", "little girl", "cat", "guy called Brian"};

    srand (this->randomBuilder());
    x = std::rand() % 6;
    return (str[x]);
}

void Victim::getPolymorphed()const
{
    std::cout << this->name << " has been turned into a " << this->change() << "!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer)
{
	out << "I'm " << sorcerer.getName() << " and I like " << sorcerer.introduce() << "!" << std::endl;
	return (out);
}