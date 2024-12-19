#ifndef ARRAY_HPP 
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
    private:
        T *array;
        unsigned int  len;
    public:
        Array(){
            this->array = 0;
            this->len = 0;
        }

        Array(const Array &ob) {
            *this = ob;
        }

        Array(unsigned int n) : len(n){
            if (len > 0)
            {
                this->array = new T[len];
                unsigned int  i = 0;
                while (i < this->len){
                    this->array[i] = 0; 
                    i++;
                }
            }
        }

        Array& operator=(const Array &ob){
            this->len = ob.size();
            this->array = new T[this->len];
            unsigned int  i = 0;
            while (i < this->len){
                this->array[i] = ob.getIndex(i);
                i++;
            }
            return (*this);
        }

         void acces(unsigned int index){
            try{
                if (index > this->len || this->len <= 0)
                    throw 0;
                else
                    std::cout<< "Acces to index : [" <<  this->array[index] << "]"<< std::endl;
            }catch(int i){
                std::cout << "segfault ++ acces " << std::endl;
            }
        }
        unsigned int  size() const {return this->len;}

        T  getIndex(unsigned int index) const {
            try{
                if (index > this->len || this->len <= 0)
                    throw 0;
                else
                    return (this->array[index]);
            }catch(int i){
                std::cout << "You are not in the range " << std::endl;
            }
            return 0;
        }
        void add(T var, unsigned int index){
            try{
                if (index > this->len  || this->len <= 0)
                    throw 0;
                else
                    (this->array[index] = var);
            }catch(int i){
                std::cout << "You can add in the range" << std::endl;
            }
        }
        ~Array() {
            delete[] this->array;
        }

        T & operator[]Array(){
            if ()
        }
};
#endif