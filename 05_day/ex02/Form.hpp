#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
#include <fstream>
#include <stdlib.h>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	public:

		Form(std::string name, int grade_to_sign, int grade_to_execute);
		virtual ~Form();
		Form(const Form &cpy);

        Form &operator = (const Form &arg);

		int 		getGradeSign(void) const;
        int 		getGradeExecute(void) const;
		std::string getName(void) const;
        bool        getIfSigned(void) const;
		void		beSigned(const Bureaucrat &other);
        void        check_exceptions(int sign, int exec);


		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:

		Form();
		const std::string name;
		const int			grade_to_sign;
        const int			grade_to_execute;
        bool        signed_status;
};

std::ostream &operator<<(std::ostream & out, const Form & Form);

#endif