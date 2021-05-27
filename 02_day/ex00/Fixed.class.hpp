/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:16:25 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/27 14:08:24 by acortes-         ###   ########.fr       */
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
#include <string>

class Fixed
{
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &other);
        Fixed   &operator = (const Fixed &other);
        int           getRawBits(void) const;
        void          setRawBits(int const raw);


    private:
        int                 value;
        static const int    fractValue = 8;
};


#endif