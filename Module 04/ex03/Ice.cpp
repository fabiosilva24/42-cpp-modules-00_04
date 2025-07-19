#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Default Ice Constructor Called" << std::endl;
}
Ice::Ice(Ice const& other) : AMateria(other)
{
    std::cout << "Ice Copy Constructor Called" << std::endl;
}
Ice &Ice::operator=(Ice const& other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor Called" << std::endl;
}