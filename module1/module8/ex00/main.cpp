#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>
#include <time.h>
int main(void){

    int randomNU = rand() % 100; 
    srand(time(NULL));
    {
        std::cout << " -- Test 1 -- " << std::endl;     
        try
        {  
            std::array<int, 5> containerA = { 18 , 20 , 53 , 53, 65};
            std::cout << "The number : " << easyfind(containerA, 0) << std::endl;
        }
        catch(int)
        {
            std::cout << "Error" << '\n';
        }
    }
    {
        std::cout << " -- Test 2 -- " << std::endl;     
        
        try
        {  
            std::array<int, 5> containerA = { 11 , 22 , 32 , 52, 52};
            std::cout << "The number : " << easyfind(containerA, 11) << std::endl;
        }
        catch(int)
        {
            std::cout << "Error" << '\n';
        }
    }
    
    {
        
        std::cout << " -- Test 3 -- " << std::endl;     
        try
        {  
            std::vector<int> containerB;
            for (int i = 0; i <= 10; i++){
                int number = rand() % 100;
                containerB.push_back(number);
            }
            std::cout << "The number : " << easyfind(containerB, randomNU) << std::endl;
        }
        catch(int)
        {
            std::cout << "Error" << '\n';
        }
    }
    
}