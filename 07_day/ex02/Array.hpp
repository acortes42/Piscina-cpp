# ifndef ARRAY
# define ARRAY

# include <iostream>
# include <cctype>
# include <string>

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        virtual ~Array();
        Array(Array<T> const &copy);

        Array &operator=(Array const &op);
        unsigned int get_size(void) const;
        
        class No_segv: public std::exception
        {
            virtual const char* what() const throw();
        };
        T &operator[](unsigned int index);

    private:
        unsigned int size;
        T *array;
};

#endif