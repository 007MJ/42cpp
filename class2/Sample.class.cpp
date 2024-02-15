#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(char p1, int p2, float p3)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "this->a1" << this->a1 << std::endl;
    std::cout << "this->a2" << this->a2 << std::endl;
    std::cout << "this->a3" << this->a3 << std::endl;
}
Sample::~Sample( void)
{
    std::cout << "Deconstructor called" << std::endl;
    return ;
}