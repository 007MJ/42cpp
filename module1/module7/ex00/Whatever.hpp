#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename SP>
void swap(SP &a, SP&b){
    SP tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename M>
M min(M &a, M &b){
    if (a == b || a > b)
        return (b);
    return (a);
}

template <typename MX>
MX max(MX &a,  MX &b){
    if (a == b || b > a)
        return (b);
    return (a);
}


#endif