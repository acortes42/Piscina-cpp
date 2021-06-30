#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){ return ;}

Intern::Intern(const Intern &cpy){*this = cpy;}

Intern &Intern::operator = (const Intern &arg){return (*this);};

std::ostream &operator<<(std::ostream &os, Intern const &arg)
{
    os << " coffe? ";
    return (os);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
    typedef Form (* VoidFunc)(std::string);
    int size = 3;

    std::string arr[size] = { "presidential pardon", "robotomy request","shrubbery creation"};
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == name)
        {
            switch(i) 
            {
                case 0:
                    std::cout << "Intern creates " << name << std::endl;
                    return (new PresidentialForm(target));
                break;
                case 1: 
                    std::cout << "Intern creates " << name << std::endl;
                    return (new RobotomyForm(target));
                break;
                case 2:
                    std::cout << "Intern creates " << name << std::endl;
                    return (new ShrubberyForm(target));
                break;
            }
        }
    }
    std::cout << "Try with a valid form name" << std::endl;
    return (NULL);
}
