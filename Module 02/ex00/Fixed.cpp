#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed() : fpntvalue(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
    std::cout << "Copy assignment Operator Called" << std::endl;
    if (this != &src)
    {
        fpntvalue = src.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl; 
}
void Fixed::setRawBits( int const raw )
{
    this->fpntvalue = raw;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fpntvalue;
}