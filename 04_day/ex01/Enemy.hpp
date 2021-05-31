#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "iostream"


class Enemy
{
    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        virtual ~Enemy();
        Enemy(const Enemy &cpy);
        Enemy   &operator = (const Enemy &other);


        std::string getType() const;
        int getHP() const;
        int setHP(int x) const;
        virtual void takeDamage(int x);
    
    private:

        int             hp;
        std::string     type;
};

#endif