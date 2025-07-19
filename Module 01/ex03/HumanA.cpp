#include "HumanA.hpp"

HumanA::HumanA(const std::string &new_name, Weapon &weapon) : name(new_name), weapon(weapon){}

void HumanA::set_name(const std::string &new_name)
{
    this->name = new_name;
}

std::string HumanA::get_name()const
{
    return (name);
}


void HumanA::attack()
{
    std::cout << HOTPINK << name << RESET << " attacks with their " << PINK << weapon.getType() << RESET << std::endl;
}

