#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

void HumanB::SetWeapon(Weapon &new_weapon)
{
    weapon = &new_weapon;
}
void HumanB::set_name(const std::string &new_name)
{
    this->name = new_name;
}

std::string HumanB::get_name()const
{
    return (name);
}

void HumanB::attack()
{
    if (weapon)
        std::cout << PASTEL_GREEN << get_name() << RESET << " attacks with their " << PINK << weapon->getType() << RESET << std::endl;
    else
        std::cout << PASTEL_GREEN << get_name() << RESET << " has no weapon" << std::endl;
}