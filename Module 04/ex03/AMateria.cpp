#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
    std::cout << "Constructor Called" << std::endl;
}
AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "Default Constructor Called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const& other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}
std::string const & AMateria::getType() const
{
    return this->type;
    
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots a mysterious ball at " <<  target.getName()  << " *" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor Called" << std::endl;
}
