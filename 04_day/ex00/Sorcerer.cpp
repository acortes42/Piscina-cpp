/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:08:52 by adrian            #+#    #+#             */
/*   Updated: 2021/05/31 10:15:27 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int Sorcerer::randomBuilder() const
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

Sorcerer::Sorcerer(void)
{
    this->name = Sorcerer::randomName();
    this->title = "the " + Sorcerer::randomName();
    std::cout << "Some random Sorcerer called " << this->getName() << " " << this->getTitle() << " just appeared!" << std::endl;
}

std::string Sorcerer::randomName()
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

Sorcerer::Sorcerer(std::string name)
{
    this->name = name;
    this->title = "the " + Sorcerer::randomName();
    std::cout << this->name << " " << this->getTitle() << " just appeared!" << std::endl;
}

std::string const &Sorcerer::getName(void) const
{
	return (this->name);
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << this->getName() << " " << this->getTitle() << " just appeared!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
    this->name = other.name;
    this->title = other.title;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &other)
{
    this->name = other.name;
    this->title = other.title;
    return (*this);
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->getName() << ", " << this->getTitle() <<", is dead. Consequences will never be the same!" << std::endl;
    return;
}

std::string const   &Sorcerer::getTitle() const
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &vict) const
{
    vict.getPolymorphed();
    return ;
}

std::ostream &	operator<<(std::ostream & ost, Sorcerer const & rhs) 
{
	ost << "I am " << rhs.getName() << ", " << rhs.getTitle() <<
		", and I like ponies!\n";
	return ost;
}