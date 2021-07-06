# include "serialize.hpp"

int main(int argc, char **argv)
{
    void *raw = static_cast<char*>(serialize());
	Data* data = deserialize(raw);
	
	std::cout << "String1: " << data->s1 << std::endl;
	std::cout << "Numero:  " << data->x << std::endl;
 	std::cout << "String2: " << data->s2 << std::endl;


    delete reinterpret_cast<Data *>(raw);
    delete data;
    return (0);
}