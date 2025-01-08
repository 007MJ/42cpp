#include "Span.hpp"

#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
    // Test simple avec 5 nombres
    std::cout << "Test simple :" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    // Test avec exception pour dépassement
    std::cout << "\nTest de dépassement :" << std::endl;
    try {
        sp.addNumber(42); // Doit lancer une exception
    } catch (...) {
        std::cerr << "Exception attrapée" << std::endl;
    }

    // Test avec moins de 2 nombres
    std::cout << "\nTest avec moins de 2 nombres :" << std::endl;
    Span sp2 = Span(2);
    sp2.addNumber(1);
    try {
        std::cout << sp2.shortestSpan() << std::endl;
    } catch (...) {
        std::cerr << "Exception attrapée" << std::endl;
    }

    // Test avec 10 000 nombres
    std::cout << "\nTest avec 10 000 nombres :" << std::endl;
    Span sp3 = Span(10000);
    for (int i = 0; i < 10000; ++i) {
        sp3.addNumber(i);
    }
    std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp3.longestSpan() << std::endl;

    return 0;
}
