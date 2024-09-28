#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
template <typename T>
int  easyfind(T container, int number){
    if (std::find(container.begin(), container.end(), number) != container.end())
        return (number);
    else
        throw 0 ;
    return (0);
}

#endif