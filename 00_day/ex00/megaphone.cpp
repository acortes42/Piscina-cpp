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
  int x;

  x = 0;
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE  NOISE *" << "\n";
  else if (argc >= 2)
  {
    while (argv[++x])
      std::cout << stringToUpper(argv[x]) << " ";
    std::cout << "\n";
  }
  else
    std::cout << argv[1] << "\n";
  return (1);
}