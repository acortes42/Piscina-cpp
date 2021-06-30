#include "RobotomyRequestForm.hpp"

RobotomyForm::RobotomyForm()
: Form("RobotomyCreationForm", 72,  45)
{}

RobotomyForm::RobotomyForm(std::string objective)
: Form("RobotomyCreationForm", 72,  45)
{
    this->objective = objective;
}

RobotomyForm::~RobotomyForm(){ return ;}

RobotomyForm::RobotomyForm(const RobotomyForm &cpy)
: Form(cpy){}

RobotomyForm &RobotomyForm::operator = (const RobotomyForm &arg){return (*this);}

std::ostream &operator<<(std::ostream &os, RobotomyForm const &arg)
{
    os << arg.getName() << ", Status: " << arg.getIfSigned() << ". Firm: " <<arg.getGradeSign() << 
    ". Exec: " << arg.getGradeExecute() << std::endl;
    return (os);
}

int RobotomyForm::randomBuilder()
{
    struct timeval  tv1;
    gettimeofday(&tv1, NULL);
    return(tv1.tv_usec);
}

void 	RobotomyForm::do_something(void)
{
    srand (randomBuilder());
    std::cout << "*** Something it's doing drilling noises ***" << std::endl;
    if (((std::rand() % 100) % 2) == 0)
        std::cout << this->objective << " has been robotomized successfully." << std::endl;
    else
        std::cout << this->objective << " need more time to be robotomized." << std::endl;
}
