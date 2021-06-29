#ifndef PRESIDENTIAL_FORM_HPP
#define PRESIDENTIAL_FORM_HPP

class PresidentialForm;
# include "Form.hpp"

class PresidentialForm: public Form
{
	public:

		PresidentialForm(std::string arg);
		virtual ~PresidentialForm();
		PresidentialForm(const PresidentialForm &cpy);

        PresidentialForm &operator = (const PresidentialForm &arg);

		void	say(void);

	private:
		PresidentialForm();
        std::string objective;
};

std::ostream &operator<<(std::ostream & out, const PresidentialForm & PresidentialForm);

#endif