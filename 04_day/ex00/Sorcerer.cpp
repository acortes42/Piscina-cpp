/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:08:52 by adrian            #+#    #+#             */
/*   Updated: 2021/06/28 19:02:12 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){return ;}

Sorcerer::Sorcerer(std::string name)
{
    this->name = name;
    this->title = "the sorcerer";
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