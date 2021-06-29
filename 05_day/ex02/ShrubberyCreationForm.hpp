#ifndef SHRUBBERY_FORM_HPP
#define SHRUBBERY_FORM_HPP

# include <iostream>
# include <string>
#include <fstream> 
class ShrubberyForm;
# include "Form.hpp"

class ShrubberyForm: public Form
{
	public:

		ShrubberyForm(std::string arg);
		virtual ~ShrubberyForm();
		ShrubberyForm(const ShrubberyForm &cpy);

        ShrubberyForm &operator = (const ShrubberyForm &arg);

        void    create_tree(void);

	private:
		ShrubberyForm();
        std::string objective;
        std::string tree =
"             /\\              \n"
"            <  >              \n"
"             \\/              \n"
"             /\\              \n"
"            /  \\             \n"
"           /++++\\            \n"
"          /  ()  \\           \n"
"          /      \\           \n"
"         /~`~`~`~`\\          \n"
"        /  ()  ()  \\         \n"
"        /          \\         \n"
"       /*&*&*&*&*&*&\\        \n"
"      /  ()  ()  ()  \\       \n"
"      /              \\       \n"
"     /++++++++++++++++\\      \n"
"    /  ()  ()  ()  ()  \\     \n"
"    /                  \\     \n"
"   /~`~`~`~`~`~`~`~`~`~`\\    \n"
"  /  ()  ()  ()  ()  ()  \\   \n"
"  /*&*&*&*&*&*&*&*&*&*&*&\\   \n"
" /                        \\  \n"
"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\ \n"
"           |   |             \n"
"          |`````|            \n"
"          \\_____/            \n";
};

std::ostream &operator<<(std::ostream & out, const ShrubberyForm & ShrubberyForm);

#endif