/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:09:59 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/27 15:16:17 by acortes-         ###   ########.fr       */
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
        Fixed(const Fixed &other);

        int                 getRawBits(void) const;
        void                setRawBits(int const bits);
        int                 toInt(void) const;
        float               toFloat(void) const;
        static const Fixed  &min(Fixed const &f1, Fixed const &f2);
        static const Fixed  &max(Fixed const &f1, Fixed const &f2);
        static Fixed        &min(Fixed &f1, Fixed &f2);
        static Fixed        &max(Fixed &f1, Fixed &f2);
        
        ~Fixed(void);

        Fixed           &operator = (const Fixed &other);
        Fixed           operator + (const Fixed &args);
        Fixed           operator - (const Fixed &args);
        Fixed           operator * (const Fixed &args);
        Fixed           operator / (const Fixed &args);
        Fixed           operator > (const Fixed &args);
        Fixed           operator < (const Fixed &args);
        Fixed           operator <= (const Fixed &args);
        Fixed           operator >= (const Fixed &args);
        Fixed           operator == (const Fixed &args);
        Fixed           operator != (const Fixed &args);
        Fixed           operator -- (int);
        Fixed           operator ++ (int);
        Fixed           operator -- ();
        Fixed           operator ++ ();
    private:
        float                 value;
        static const int    fractValue = 8;
};

// First I try to put this into the public function in Fixed, but seems that I need to use "friend"
//  for this. It's a forbiden function in this exercise, so here is the overloading.

std::ostream&   operator<<(std::ostream &os, Fixed const &arg);

#endif