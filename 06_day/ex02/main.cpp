#include "includes.hpp"

 int main()
 {
    A a;
    B b;
    C c;

    Base *base = generate();
    
    std::cout << "Pointers :" << std::endl;
    identify_from_pointer(&a);
    identify_from_pointer(&b);
    identify_from_pointer(&c);

    std::cout << "References :" << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);

    std::cout << "Base :" << std::endl;
    identify_from_pointer(base);
    identify_from_reference(*base);

    delete base;
}