#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *array;
        size_t len;
    public:
        Array(){
            this->len = 0;
            this->array = new T[0];
        }
        Array(unsigned int n){
            this->len = n;
            this->array = new T[n];
        }
        Array(Array const &src){
            this->array = new T[src.len];
            for (unsigned int i = 0; i < this->len; i++)
                this->array[i] = src.array[i];
        }
        ~Array(void){
            delete [] this->array;
        }
        Array &operator=(Array const &obj){
            if (this != &obj)
            {
                delete [] this->array;
                this->array = new T[obj.len];
                this->len = obj.len;
                for (unsigned int i = 0; i < obj.len; i++)
                    this->array[i] = obj.array[i];
            }
            return *this;
        }
        T &operator[](unsigned int n) const{
            if (n >= this->len)
                throw OutOfBoundsException();
            return array[n];
        }
        unsigned int size(void) const{
            return this->len;
        }
        class OutOfBoundsException : public std::exception{
            public:
                const char *what() const throw(){
                    return "Error: Out of bounds";
                }
        };
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &obj){
    for (unsigned int i = 0; i < obj.size(); i++)
        o << obj[i] << " | ";
    return o;
}
#endif
