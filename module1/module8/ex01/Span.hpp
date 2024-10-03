#ifndef SPAN_H
#define SPAN_H
#include "easyfind.hpp"

#include <iostream>
#include <vector>

class Span {
    private:
        Span(Span &ob);
        Span& operator=(Span &ob);
        int size;
        std::vector<int> arr_number;

    public :
        Span(unsigned int N);
        void addNumber();
        int shortestSpan();
        int longestSpan();
        ~Span();
};

#endif
