#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        // copy
        MutantStack(const MutantStack<T, Container > &ob) : MutantStack<T, Container >::stack(ob) {};
        
        // affectation 
        MutantStack &operator=(const MutantStack<T, Container > &ob) {
            if (this != &ob){
                MutantStack<T, Container >::stack::operator=(ob);
            }
            return (*this);
        } 
        // buid
        MutantStack() : MutantStack<T, Container >::stack() {};
        virtual ~MutantStack(){};
        // MutantStack(const MutantStack& obj);
        // MutantStack& operator=(MutantStack const MutantStack T&);
     typedef typename Container::iterator iterator;
     typedef typename Container::reverse_iterator reverse_iterator;
     // Utilisation correcte pour les itérateurs inversés.

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    reverse_iterator rbegin() {return this->c.rbegin();}
    reverse_iterator rend() {return this->c.rend();}


};



#endif