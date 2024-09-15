#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
    std::srand(time(NULL));
    int random = std::rand() % 3;
    if (random == 0)
        return (new A());
    if (random == 1)
        return (new C());
    if (random == 2)
        return (new B());
    return (NULL);
} 

void identify(Base* p){
     try
     {
        if (C *TheC = dynamic_cast<C *>(p)){
            std::cout << "B" << std::endl;
        }
        else if (B *TheB = dynamic_cast<B *>(p)){
            std::cout << "B" << std::endl;
        }
        else if (A *TheA = dynamic_cast<A *>(p)){
            std::cout << "A" << std::endl;
        }
        else {
            throw std::exception();
        }
     }
     catch(const std::exception& e){
        std::cerr << e.what() << '\n';
     }
}

void identify(Base& p)
{
     try
     {
        C &TheC = dynamic_cast<C &>( p);
        std::cout << "C" << std::endl;
        (void)TheC;
     }
     catch(const std::bad_cast &bc)
     {
        std::cerr << "reference function" << bc.what() << '\n';
     }    

     try
     {
        A &TheA = dynamic_cast<A &>( p);
        std::cout << "A" << std::endl;
        (void)TheA;
     }
     catch(const std::bad_cast &bc)
     {
        std::cerr << "reference function" << bc.what() << '\n';
     }
     try
     {
        B &TheB = dynamic_cast<B &>( p);
        std::cout << "B" << std::endl;
        (void)TheB;
     }
     catch(const std::bad_cast &bc)
     {
        std::cerr <<"reference function" << bc.what() << '\n';
     }
}

int  main (void){
    
    identify(generate());
    std::cout << "======================" << std::endl;
    identify(*generate());
}