#include "easyfind.hpp"

int main()
{
    std::vector<int> victor = {100,50,20,10};
    std::list<int> lista(4,100);
    std::map<int,int> mapi;

    mapi.insert(std::pair<int,int>( 2, 30 )); 
    mapi.insert(std::pair<int,int>( 1, 42 )); 
    mapi.insert(std::pair<int,int>( 3, 100 )); 

    std::vector<int>::iterator iter = easyfind(victor, 50);
    std::list<int>::iterator iter_list = easyfind(lista, 100);
    std::map<int,int>::iterator iter_map = easyfind(mapi, 42);

    std::cout << "El valor de iter es : " << *iter << std::endl;
    std::cout << "El valor de iter_list es : " << *iter_list << std::endl;
    std::cout << "El valor de iter_map es : [" << iter_map->first << ", " << iter_map->second << "]\n";

    return (0);
}