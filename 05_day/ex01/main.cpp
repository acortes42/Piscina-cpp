# include "Bureaucrat.hpp"

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

	Form form("form1", 1, 1);
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
	return (0);
}