#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:

        MateriaSource();
        ~MateriaSource();

        MateriaSource &operator=(MateriaSource const &other);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    private:

        AMateria        *magicSlots[4];
        int             magicNum;
};  

#endif