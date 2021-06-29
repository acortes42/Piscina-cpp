#include "PresidentialPardonForm.hpp"

PresidentialForm::PresidentialForm()
: Form("Presidential pardon", 25,  5)
{}

PresidentialForm::PresidentialForm(std::string objective)
: Form("Presidential pardon", 25,  5)
{
    this->objective = objective;
}

PresidentialForm::~PresidentialForm(){ return ;}

PresidentialForm::PresidentialForm(const PresidentialForm &cpy)
: Form(cpy){}

PresidentialForm &PresidentialForm::operator = (const PresidentialForm &arg){return (*this);}

std::ostream &operator<<(std::ostream &os, PresidentialForm const &arg)
{
    os << arg.getName() << ", Status: " << arg.getIfSigned() << ". Firm: " <<arg.getGradeSign() << 
    ". Exec: " << arg.getGradeExecute() << std::endl;
    return (os);
}


void 	PresidentialForm::say(void)
{
    std::cout << this->objective <<" has been pardoned by Zafod Beeblebrox." << std::endl;
}
