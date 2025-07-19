#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Constructor Called" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria(other)
{
    std::cout << "Cure Copy Constructor Called" << std::endl;
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

Cure &Cure::operator=(Cure const &other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called" << std::endl;
}