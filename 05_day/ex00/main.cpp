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
	return (0);
}