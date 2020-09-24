#ifndef  FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>


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

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int x);
        Fixed(const float x);
        
        ~Fixed(void);
        Fixed(const Fixed &cpy);

        Fixed           operator = (const Fixed &arg);


        int             getRawBits(void);
        void            setRawBits(int const bits);
        int             toInt(void) const;
        float           toFloat(void) const;


    private:
        int                 value;
        static const int    fractValue = 8;
};

// First I try to put this into the public function in Fixed, but seems that I need to use "friend"
//  for this. It's a forbiden function in this exercise, so here is the overloading.

std::ostream&   operator<<(std::ostream &os, Fixed const &arg);

#endif