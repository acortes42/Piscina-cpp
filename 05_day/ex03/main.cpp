# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	Bureaucrat random("Random", 42);
    std::cout << random << std::endl;
    random.incrementGrade();
    std::cout << random << std::endl;
    random.decrementGrade();
    std::cout << random << std::endl;
    random.incrementGrade();
	try
	{
		Bureaucrat Spy("Spy", 151);
		std::cout << Spy << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
    try
	{
		Bureaucrat superadmin("superadmin", 0);
		std::cout << superadmin << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// sign main

	ShrubberyForm form("form1");
	RobotomyForm robot("robo");
	PresidentialForm pardon("Villain");
	Bureaucrat super_admin("super_admin", 1);
	Bureaucrat user("user", 43);
	try
	{
		user.signForm(form);
		std::cout << "~~~" << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "~~~ " << e.what() << std::endl;
	}

	try
	{
		super_admin.signForm(form);
		std::cout << "~~~ " << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "~~~ " << e.what() << std::endl;
	}
	form.create_tree();
	robot.do_something();
	pardon.say();

	// ex03
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	delete (rrf);
	return (0);
}