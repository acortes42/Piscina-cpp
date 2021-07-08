#include "Array.hpp"

template<typename T>
Array<T>::Array(): size(0), array(nullptr)
{}

template<typename T>
Array<T>::Array(unsigned int n): size(n)
{
    array = new T[n]();
}

template<typename T>
Array<T>::~Array()
{
    if (this->size > 0)
        delete[](this->array);
    this->array = nullptr;
}

template<typename T>
Array<T>::Array(const Array &op)
{
    this->array = new T[op.size]();
    for(int i = 0; i < op.size; i++)
        this->array[i] = op.array[i];
    this->size = op.size;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &op)
{
    if (this->size > 0)
        delete(this->array);
    this->array = nullptr;
    if (op.size > 0)
    {
        this->array = new T[op.size]();
        for(int i = 0; i < op.size; i++)
            this->array[i] = op.array[i];
    }
    this->size = op.size;
    return (*this);
}

template<typename T>
const char* Array<T>::No_segv::what() const throw()
{
	return "Exception: index error";
}

template<typename T>
unsigned int Array<T>::get_size(void) const
{
    return (this->size);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index < this->size)
        return (this->array[index]);
    throw Array::No_segv();
}

int main()
{
    Array<int> ints(3);

    ints[0] = 1;
    ints[1] = 2;
    ints[2] = 3;

    std::cout << "num:  " << ints[0] << " "<< ints[1] << " " << ints[2] << std::endl;

    try
    {
        std::cout << ints[42] << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    Array<std::string> strings(5);
    const std::string frase[5] = { "esto", "es", "una", "frase", "1"};
    for (int i = 0; i < (int)strings.get_size(); i++)
        strings[i] = frase[i];
    std::cout << "strings : "<< strings[0] << " "<< strings[3] << " "<< strings[4]<< std::endl;
    try
    {
        std::cout << "fuera de rango " << strings[99] << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    return (0);
}