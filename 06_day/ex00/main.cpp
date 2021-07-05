#include "cast.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Cast caster;
        float f;

        f = caster.change(argv[1]);
        caster.toChar(f);
        caster.toInt(f);
        caster.toFloat(f);
        caster.toDouble(f);
    }
    else
        std::cout << "Wrong number of arguments" << std::endl;
    return (0);
}