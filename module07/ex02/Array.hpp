#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *_array;
        size_t _len;
    public:
        Array(){
            this->_len = 0;
            this->_array = new T[0];
        }
        Array(unsigned int n){
            this->_len = n;
            this->_array = new T[n];
        }
        Array(Array const &src){
            this->_array = new T[src._len];
            for (unsigned int i = 0; i < this->_len; i++)
                this->_array[i] = src._array[i];
        }
        ~Array(void){
            delete [] this->_array;
        }
        Array &operator=(Array const &rhs){
            if (this != &rhs)
            {
                delete [] this->_array;
                this->_array = new T[rhs._len];
                this->_len = rhs._len;
                for (unsigned int i = 0; i < rhs._len; i++)
                    this->_array[i] = rhs._array[i];
            }
            return *this;
        }
        T &operator[](unsigned int n) const{
            if (n >= _len)
                throw OutOfBoundsException();
            return _array[n];
        }
        unsigned int size(void) const{
            return this->_len;
        }
        class OutOfBoundsException : public std::exception{
            public:
                const char *what() const throw(){
                    return "Error: Out of bounds";
                }
        };
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &rhs){
    for (unsigned int i = 0; i < rhs.size(); i++)
        o << rhs[i] << " ";
    return o;
}
#endif
