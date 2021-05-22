#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <string>

class Bureacrat
{
	public:

		Bureacrat();
		~Bureacrat();
		Bureacrat(const Bureacrat &cpy);

        Bureacrat     operator = (const Bureacrat &arg);



	private:
		std::string name;
		int			grade;
		int			lowerGrade;
}

std::ostream&   operator<<(std::ostream &os, Bureacrat const &arg);


#endif