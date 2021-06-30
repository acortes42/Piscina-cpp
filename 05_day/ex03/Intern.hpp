#ifndef INTERN_HPP
#define INTERN_HPP

#include <algorithm>
class Intern;
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:

		Intern();
		virtual ~Intern();
		Intern(const Intern &cpy);

        Intern &operator = (const Intern &arg);

		Form	*makeForm(std::string name, std::string target);
};

std::ostream &operator<<(std::ostream & out, const Intern & Intern);

#endif