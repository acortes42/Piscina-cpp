#include "Human.hpp"

Human::Human()
{
    brain = new Brain();
}

Human::~Human() {delete this->brain;}

Brain       &Human::getBrain() { return (*this->brain); }
