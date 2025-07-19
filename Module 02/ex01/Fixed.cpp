#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(const float floatvalue) : fpntvalue(roundf(floatvalue * (1 << _fractionalBits)))
{
    std::cout << "Float Constructor Called" << std::endl;

}
Fixed::Fixed(const int intvalue) : fpntvalue(intvalue << _fractionalBits)
{
    std::cout << "Int Constructor Called" << std::endl;
}
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
    return this->fpntvalue;
}

float Fixed::toFloat() const
{
    return (float)this->fpntvalue /  (1 << _fractionalBits);


}
int Fixed::toInt() const
{
    return this->fpntvalue >> _fractionalBits;
}
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}