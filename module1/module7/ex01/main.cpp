#include "iter.hpp"
#include <time.h>

void sayAge(int age){
    if (age <= 20)
        std::cout << "I am " << age << " and I am build different !!" << std::endl;
    else if ( age < 50)
        std::cout << "I am " << age << " dammmm I feel strong " << std::endl;
    else 
        std::cout << "I am " << age << " and I  can still run " << std::endl;
}

void isdead(int luck)
{
    srand(time(NULL));
    int is = rand() % 100;
    if (is == luck)
    {
        std::cout<<"You win  against the Batman"<< std::endl;
        std::cout << "Because you have the Joker number "<< is << std::endl;
    }
    else
    {
        std::cout<<"YOU can't beat Batman"<< std::endl;
        std::cout << "Because his has the Joker number "<< is << std::endl;
    }
}
int main(void){

    // {
    //     int size = 5;
    //     int *foo = new int(size);
    //     foo[0] = 23;
    //     foo[1] = 40;
    //     foo[2] = 90;
    //     foo[3] = 23;
    //     foo[4] = 19;
    //     iter(foo, size, sayAge);
    //     delete foo;
    // }
    {
        int size = 4;
        int *foo = new int(size);
        foo[0] = 23;
        foo[1] = 40;
        foo[2] = 90;
        foo[3] = 23;
        foo[4] = 19;
        iter(foo, size, isdead);

    }
}