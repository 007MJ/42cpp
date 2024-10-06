#ifndef SPAN_H
#define SPAN_H
#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
    private:
        int size;
        std::vector<int> arr_number;
    public :
        Span();
        ~Span();
        Span(const Span &ob);
        Span(int N);
        Span& operator=(const Span &ob);

        int                 getSize() const;
        std::vector<int>    getArray() const;

        void                addNumber(int n);
        int                 findMin();
        int                 findMax();
        int                 shortestSpan();
        int                 longestSpan();
};

#endif
