#include <iostream>

int main()
{
    std::string str;
    std::string *pointer;
    std::string &direction = str;

    str = "HI THIS IS BRAIN";
    pointer = &str;
    direction = str;
    std::cout << str << "       " << pointer << "       " << direction << std::endl;
    return (1);
}