#ifndef INCLUDES_HPP
#define INCLUDES_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int random_rand(void);
Base *generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif