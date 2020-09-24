#ifndef  FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <string>


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
        ~Fixed(void);
        Fixed(const Fixed &cpy);
        Fixed   operator = (const Fixed &arg);
        int           getRawBits(void);
        void          setRawBits(int const bits);


    private:
        int                 value;
        static const int    fractValue = 8;
};


#endif