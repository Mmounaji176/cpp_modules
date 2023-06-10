#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    ~Brain( void );
    Brain( const Brain& src );
    Brain& operator=( const Brain& rhs );
};
 
#endif