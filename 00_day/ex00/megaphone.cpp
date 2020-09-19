#include <iostream>
#include <string>

std::string stringToUpper(std::string oString)
{
    int i;

    i = 0;
    while(i < oString.length())
    {
       oString[i] = toupper(oString[i]);
       i++;
    }
    return (oString);
}

int main(int argc,char** argv)
{
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE  NOISE *" << "\n";
  else if (argc == 2)
    std::cout << stringToUpper(argv[1]) << "\n";
  else
    std::cout << argv[1] << "\n";
  return (1);
}