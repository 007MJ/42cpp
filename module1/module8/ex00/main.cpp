#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>
#include <time.h>
int main(void){

    srand(time(NULL));
    // {
        
    //     try
    //     {  
    //         std::array<int, 5> containerA = { 1 , 2 , 3 , 5, 5};
    //         std::cout << " the number : " << easyfind(containerA, 10) << std::endl;
    //     }
    //     catch(int)
    //     {
    //         std::cout << "the container is empty" << '\n';
    //     }
    // }
    
    {
        
        try
        {  
            std::vector<int> containerB;
            for (int i = 0; i <= 10; i++){
                int number = rand() % 100;
                containerB.push_back(number);
            }
            std::cout << " the number : " << easyfind(containerB, 10) << std::endl;
        }
        catch(int)
        {
            std::cout << "the container is empty" << '\n';
        }
    }
    
}