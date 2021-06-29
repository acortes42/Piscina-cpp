#include "ShrubberyCreationForm.hpp"

ShrubberyForm::ShrubberyForm()
: Form("ShrubberyCreationShrubberyForm", 137,  145)
{}

ShrubberyForm::ShrubberyForm(std::string objective)
: Form("ShrubberyCreationShrubberyForm", 137,  145)
{
    this->objective = objective;
}

ShrubberyForm::~ShrubberyForm(){ return ;}

ShrubberyForm::ShrubberyForm(const ShrubberyForm &cpy)
: Form(cpy){}

ShrubberyForm &ShrubberyForm::operator = (const ShrubberyForm &arg){return (*this);}

std::ostream &operator<<(std::ostream &os, ShrubberyForm const &arg)
{
    os << arg.getName() << ", Status: " << arg.getIfSigned() << ". Firm: " <<arg.getGradeSign() << 
    ". Exec: " << arg.getGradeExecute() << std::endl;
    return (os);
}

void 	ShrubberyForm::create_tree(void)
{
    std::string txt = objective + "_shrubbery.txt";
    std::ofstream outfile (txt);
    std::cout << this->tree << std::endl;
    outfile << this->tree << std::endl;

    outfile.close();
}
