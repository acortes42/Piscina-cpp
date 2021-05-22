#include "Brain.hpp"
#include <sstream>

Brain::Brain() {}

Brain::~Brain() {}

std::string Brain::identify()
{
    std::stringstream address;
    address << this;

    return (address.str());
}
