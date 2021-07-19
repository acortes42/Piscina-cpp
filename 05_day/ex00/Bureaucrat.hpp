#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:

		Bureaucrat(std::string name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);

        Bureaucrat &operator = (const Bureaucrat &arg);

		int 		getGrade(void) const;
		std::string getName(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

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

		Bureaucrat();
		std::string name;
		int			grade;
};

std::ostream &operator<<(std::ostream & out, const Bureaucrat & Bureaucrat);

#endif