#include  "Weapon.hpp"

Weapon::Weapon(const std::string &new_type) : type(new_type){}

void Weapon::setType(const std::string &new_type)
{
    this->type = new_type;
}

std::string Weapon::getType()const
{
    return (type);
}
    
