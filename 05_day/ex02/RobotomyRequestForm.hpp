#ifndef ROBOTOMY_FORM_HPP
#define ROBOTOMY_FORM_HPP

# include <iostream>
# include <string>
#include <fstream>
#include <sys/time.h>
#include <stdlib.h>
class RobotomyForm;
# include "Form.hpp"

class RobotomyForm: public Form
{
	public:

		RobotomyForm(std::string arg);
		virtual ~RobotomyForm();
		RobotomyForm(const RobotomyForm &cpy);

        RobotomyForm &operator = (const RobotomyForm &arg);
		int		randomBuilder();
		void	do_something(void);

	private:
		RobotomyForm();
        std::string objective;
};

std::ostream &operator<<(std::ostream & out, const RobotomyForm & RobotomyForm);

#endif