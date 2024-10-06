#include "Span.hpp"

int main()
{
    std::cout  << "howehre" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout  << "howehre - 1" << std::endl;
    std:: cout << sp.findMin() << std::endl;
    std:: cout << sp.findMax() << std::endl;
    std::cout  << "howehre - 2" << std::endl;
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    return 0;
}