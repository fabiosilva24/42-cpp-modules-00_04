#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(const float floatvalue) : fpntvalue(roundf(floatvalue * (1 << _fractionalBits)))
{
    //std::cout << "Float Constructor Called" << std::endl;

}
Fixed::Fixed(const int intvalue) : fpntvalue(intvalue << _fractionalBits)
{
    //std::cout << "Int Constructor Called" << std::endl;
}
Fixed::Fixed() : fpntvalue(0)
{
    //std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    //std::cout << "Copy Constructor Called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
    //std::cout << "Assignation Operator Called" << std::endl;
    if (this != &src)
    {
        fpntvalue = src.getRawBits();
    }
    return *this;
}

Fixed Fixed::operator+(const Fixed& src) const
{
    return Fixed(this->toFloat() + src.toFloat());
}
Fixed Fixed::operator-(const Fixed& src) const
{
    return Fixed(this->toFloat() - src.toFloat());
}
Fixed Fixed::operator*(const Fixed &src) const
{
    return Fixed(this->toFloat() * src.toFloat());
}
Fixed Fixed::operator/(const Fixed &src) const
{
    if (src.toFloat() == 0.0f)
    {
        std::cout << "cant divide 0 by 0" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / src.toFloat());
}

Fixed& Fixed::operator++()
{
    this->fpntvalue += 1;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->fpntvalue += 1;
    return temp;
}
Fixed& Fixed::operator--()
{
    this->fpntvalue -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->fpntvalue -= 1;
    return temp;
}

bool Fixed::operator<(const Fixed& src) const
{
    return (this->fpntvalue < src.getRawBits());
}

bool Fixed::operator>(const Fixed& src) const
{
    return (this->fpntvalue > src.getRawBits());
}
bool Fixed::operator>=(const Fixed& src) const
{
    return (this->fpntvalue >= src.getRawBits());
}
bool Fixed::operator!=(const Fixed& src) const
{
    return (this->fpntvalue != src.getRawBits());
}
bool Fixed::operator==(const Fixed& src) const
{
    return (this->fpntvalue == src.getRawBits());
}
bool Fixed::operator<=(const Fixed& src) const
{
    return (this->fpntvalue <= src.getRawBits());
}

Fixed::~Fixed()
{
    //std::cout << "Destructor Called" << std::endl;
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
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}