# ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed{
    private:
        int point;
        const static int fractional = 8;
    public:
        //Orthodox Canonical Form
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed& operator=(const Fixed &fixed);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

};
#endif