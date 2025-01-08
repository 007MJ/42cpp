#include "MutantStack.hpp"
#include <iostream>

#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main()
{
    std::cout << "Test : Création et opérations de base" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Taille actuelle de la pile : " << mstack.size() << std::endl;
    std::cout << "Élément au sommet : " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Taille après pop : " << mstack.size() << std::endl;
    std::cout << "Élément au sommet après pop : " << mstack.top() << std::endl;

    std::cout << "\nTest : Affectation d'une pile vide" << std::endl;
    MutantStack<int> vstack;
    mstack = vstack;
    std::cout << "Taille après affectation d'une pile vide : " << mstack.size() << std::endl;

    std::cout << "\nTest : Ajout de plusieurs éléments" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Taille après ajouts : " << mstack.size() << std::endl;

    std::cout << "\nContenu de la pile (itérateurs classiques) :" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::cout << "\nContenu de la pile (itérateurs inversés) :" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << " ";
        ++rit;
    }
    std::cout << std::endl;

    std::cout << "\nTest : Copie d'une pile non vide" << std::endl;
    MutantStack<int> copiedStack(mstack);
    std::cout << "Taille de la pile copiée : " << copiedStack.size() << std::endl;

    std::cout << "Contenu de la pile copiée (itérateurs classiques) :" << std::endl;
    for (MutantStack<int>::iterator it = copiedStack.begin(); it != copiedStack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "\nTest : Constructeur de conversion avec std::stack" << std::endl;
    std::stack<int> stdStack(mstack);
    std::cout << "Taille de la std::stack construite depuis MutantStack : " << stdStack.size() << std::endl;
    std::cout << "Élément au sommet de std::stack : " << stdStack.top() << std::endl;

    return 0;
}
