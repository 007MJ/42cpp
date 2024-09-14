#include <iostream>
#include "StructData.hpp"

uintptr_t serialize(void* ptr){
    return (reinterpret_cast<uintptr_t> (ptr));
}


void* my_deserialize(uintptr_t raw){
    return (reinterpret_cast<void *> (raw));
}
int  main (void){

    int *ptr  = new (int);
    *ptr = 23;
    StructData B(ptr);
    std::cout << "Data objet    : " << &B << std::endl;
    std::cout << "Origin Data   : "<< my_deserialize(serialize(&B)) << std::endl;
}