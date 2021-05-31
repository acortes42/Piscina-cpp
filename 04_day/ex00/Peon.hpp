/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:07:54 by adrian            #+#    #+#             */
/*   Updated: 2021/05/31 10:09:30 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_HPP
#define Peon_HPP

#include "Victim.hpp"

class Peon: public Victim
{
    public:

        Peon(void);
        Peon(std::string const & name);
        ~Peon(void);
        Peon(const Peon &cpy);
        Peon   &operator = (const Peon &other);

    protected:

        std::string name;
};

#endif