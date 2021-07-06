#include "cast.hpp"

Cast::Cast(){}
Cast::~Cast(){}
Cast::Cast(const Cast &cpy){*this = cpy;}
Cast &Cast::operator = (const Cast &arg){return (*this);}

float	Cast::change(std::string const str)
{
	float ret;

	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf")
		this->flag = true;
	try
	{
		if (str.length() == 1)
		{
			if (static_cast<float>(str[0]) >= 0 && static_cast<float>(str[0]) <= 9) 
				return (static_cast<float>(str[0]));
		}
		return (std::stof(str));
	}
	catch(std::exception const &e)
	{
		std::cout << "Non displayable"<< std::endl;
		this->stop = true;
	}
	return (0);
}

void    Cast::toInt(float f)
{
    int x;

	if (this->stop)
		return ;
	if ( this->flag == true)
	{
		std::cout << "int: impossible"<< std::endl;
		return ;
	}
    try
	{
		x = static_cast<int>(f);
		std::cout << "int: " << x << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "int: impossible"<< std::endl;
	}
}
void 		Cast::toChar(float f)
{
	char c;

	if (this->stop)
		return ;
	if ( this->flag == true)
	{
		std::cout << "char: impossible"<< std::endl;
		return ;
	}
	try
	{
		if (static_cast<int>(f) >= 32 && static_cast<int>(f) <= 126)
		{
			c = static_cast<char>(f);
			std::cout << "char: " << c << std::endl;
		}
		else
			std::cout << "char: Non displayable"<< std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "char: impossible"<< std::endl;
	}
}
void 		Cast::toDouble(float f)
{
	if (this->stop)
		return ;
	try
	{
		std::cout << std::setprecision(1) << std::fixed;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "double: impossible"<< std::endl;
	}
}

void 		Cast::toFloat(float f)
{
	if (this->stop)
		return ;
	try
	{
		std::cout << std::setprecision(1) << std::fixed;
		std::cout << "float: " << static_cast<double>(f) << "f" << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "float: impossible"<< std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Cast const &arg)
{
    os << " ";
    return (os);
}
