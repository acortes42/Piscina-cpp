#include "Form.hpp"

Form::Form()
: name("anon"), grade_to_execute(1), grade_to_sign(150)
{
    this->signed_status = false;
}

Form::Form(std::string name, int sign, int exec)
: name(name), grade_to_execute(exec), grade_to_sign(sign)
{
    this->check_exceptions(sign, exec);
    this->signed_status = false;
}

Form::~Form()
{
    return ;
}

Form::Form(const Form &cpy)
: name(cpy.name), grade_to_execute(cpy.grade_to_execute), grade_to_sign(cpy.grade_to_sign)
{
    *this = cpy;
}

Form &Form::operator = (const Form &arg)
{
    this->signed_status = arg.signed_status;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

int 	Form::getGradeExecute(void) const{ return (this->grade_to_execute); }
int 	Form::getGradeSign(void) const{ return (this->grade_to_sign); }
bool 	Form::getIfSigned(void) const{ return (this->signed_status); }
std::string Form::getName(void) const{ return (this->name); }

void 	Form::check_exceptions(int sign, int exec)
{
    if (sign < 1 || exec < 1)
        throw Form::GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw Form::GradeTooLowException();
    return;
}

void    Form::beSigned(const Bureaucrat &person)
{
    if (this->getGradeSign() >= person.getGrade())
        this->signed_status = true;
    else
        throw Form::GradeTooLowException();
}
std::ostream &operator<<(std::ostream &os, Form const &arg)
{
    os << arg.getName() << ", Status: " << arg.getIfSigned() << ". Firm: " <<arg.getGradeSign() << 
    ". Exec: " << arg.getGradeExecute() << std::endl;
    return (os);
}