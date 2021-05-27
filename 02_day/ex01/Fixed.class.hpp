/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:02:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/27 14:07:15 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

    Canonical class exemple


class A final
{
   public:
      A ();
      A (const A &a);
      ~A ();
      A & operator = (const A &a);
};

*/

#ifndef  FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int x);
        Fixed(const float x);
        
        ~Fixed(void);
        Fixed(const Fixed &other);
        Fixed   &operator = (const Fixed &other);


        int             getRawBits(void) const;
        void            setRawBits(int const bits);
        int             toInt(void) const;
        float           toFloat(void) const;


    private:
        int                 value;
        static const int    fractValue = 8;
};

std::ostream&   operator<<(std::ostream &os, Fixed const &arg);

#endif