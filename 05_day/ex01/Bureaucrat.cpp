#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "anon";
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
    if (grade <= 150 && grade > 0)
        this->grade = grade;
    else
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            throw Bureaucrat::GradeTooHighException();   
    }
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
    *this = cpy;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &arg)
{
    this->grade = arg.grade;
    return (*this);
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

int 	Bureaucrat::getGrade(void) const{return (this->grade);}
std::string Bureaucrat::getName(void) const{return (this->name);}

void 	Bureaucrat::decrementGrade(void)
{
    if (this->grade < 150)
        this->grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void 	Bureaucrat::incrementGrade(void)
{
    if (this->grade > 1)
        this->grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::signForm(Form &form)
{
    if (this->getGrade() >= form.getGradeSign())
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    else
         std::cout << this->getName() << "cannot sign" << form.getName() << "because his grade is \
         too low." << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &arg)
{
    os << arg.getName() << ", Bureaucrat grade " << arg.getGrade() << std::endl;
    return (os);
}