#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
template <typename T>

bool  easyfind(T container, int number){
    if (std::find(container.begin(), container.end(), number) != container.end())
        return (true);
    return (false);
}

#endif