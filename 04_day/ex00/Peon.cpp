/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:59:58 by adrian            #+#    #+#             */
/*   Updated: 2021/05/31 10:07:00 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const & name) : Victim(name)
{
    std::cout <<  "Zog zog." << std::endl;
    return ;
}

Peon::Peon(const Peon &other)
{
    this->name = other.name;
    return ;
}

Peon::~Peon(void)
{
    std::cout <<  "Bleuark..." << std::endl;
    return;
}

Peon &Peon::operator = (const Peon &other)
{
    this->name = other.name;
    return (*this);
}
