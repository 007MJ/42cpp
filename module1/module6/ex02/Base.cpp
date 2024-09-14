#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include 
Base::Base(){}
Base::~Base(){
    
}

Base * Base::generate(void){
    std::srand(time(NULL));
    this->random = std::rand() % 3;

    if (this->random == 0)
        return (new A());
    if (this->random == 1)
        return (new C());
    if (this->random == 2)
        return (new B());
} 

void Base::identify(Base* p){
    
}