#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        // MutantStack(const MutantStack& obj);
        // MutantStack& operator=(MutantStack const MutantStack T&);
        typedef typename Container::iterator iterator;

        iterator begin(void){return this->c.begin();}
        iterator end(void){return this->c.end();}
};



#endif