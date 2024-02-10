
#include <iostream>
#include <string>

int main (int ac, char **av)
{

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i;
        for ( i = 1; i < ac; i++)
        {
            std:: string str = av[i];
            for (unsigned int j = 0; j < str.length();j++)
                std::cout << str[j];
            std::cout << std::endl;
        }
    }
    return (0);
}