/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:52:42 by adrian            #+#    #+#             */
/*   Updated: 2021/06/28 19:01:33 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer
{
    public:

        Sorcerer(std::string name);
        Sorcerer(std::string name, std::string title);
        virtual ~Sorcerer(void);
        Sorcerer(const Sorcerer &cpy);
        Sorcerer   &operator = (const Sorcerer &other);
        
        std::string const   &getTitle() const;
        void                polymorph(Victim const &vict) const;
        std::string const   &getName()const;

    protected:
        Sorcerer();
        std::string name;
        std::string title;
};

std::ostream &	operator<<(std::ostream & ost, Sorcerer const & rhs);

#endif