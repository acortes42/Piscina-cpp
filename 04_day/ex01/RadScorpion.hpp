#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:

        RadScorpion();
        ~RadScorpion();
        RadScorpion(const RadScorpion &cpy);
        RadScorpion &operator = (const RadScorpion &other);

        void takeDamage(int x);
    
};

#endif