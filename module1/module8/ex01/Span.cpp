
#include "Span.hpp"
Span::Span(int N) : size(0), arr_number(N){
}

void Span::addNumber(int n){
    if ((unsigned long)this->size < this->arr_number.size())
    {
        this->arr_number[this->size] = n;
        this->size++;
    }else
        throw 0;
}

// int Span::findMin(int nb, bool look){
//     int i = 0;
//     int tmp;

//     tmp = this->arr_number[i];
//     while (i + 1 < this->size)
//     {
//         if (this->arr_number[i] == nb && look == false)
//         {
//             tmp = std::min(tmp, this->arr_number[i + 1]);
//             std::cout << arr_number[i] << std::endl;
//         }
//         i++;
//     }
//     return tmp;
// }


int Span::findMin(){
    int newres = 999;
    int oldres;
    int tmp;
    int index = 0;
    tmp = this->arr_number[0];
    int arryindex  = 0;
    while (arryindex  < (int)this->arr_number.size())
    {
        index = 0;
       while (index < (int)this->arr_number.size()){
            if (index != arryindex)
            {
                oldres = (this->arr_number[arryindex] - this->arr_number[index]);
                if (oldres < 0)
                    oldres *= -1;
                if (newres > oldres)
                    newres = oldres;
            }
            index++;
        }
        arryindex++;
    }
    return newres;
}

int Span::findMax(){
    int newres = -2;
    int oldres;
    int tmp;
    int index = 0;
    tmp = this->arr_number[0];
    int arryindex  = 0;
    while (arryindex  < (int)this->arr_number.size())
    {
        index = 0;
       while (index < (int)this->arr_number.size()){
            if (index != arryindex)
            {
                oldres = (this->arr_number[arryindex] - this->arr_number[index]);
                if (oldres < 0)
                    oldres *= -1;
                if (newres < oldres)
                    newres = oldres;
            }
            index++;
        }
        arryindex++;
    }
    return newres;
}



int Span::shortestSpan(){

    int tmp1; 
    if (this->size < 0)
    {
        throw 0 ;
    }
    else if (this->size > 1){
        tmp1 = findMin();
        return (tmp1);
    }
    throw 0;
    return (0);
}

int Span::longestSpan(){

    int tmp1; 
    if (this->size < 0)
    {
        throw 0 ;
    }
    else if (this->size > 1){
        tmp1 = findMax();
        return (tmp1);
    }
    throw 0;
    return (0);
}

int                 Span::getSize() const {return this->size;}
std::vector<int>    Span::getArray() const {return (this->arr_number);}
Span::~Span(){}

Span& Span::operator=(const Span &ob) {
    this->size = ob.getSize();
    this->arr_number = ob.getArray();
    return (*this);
}
Span::Span(const Span &ob){
    *this = ob;
}
Span::Span(){}
