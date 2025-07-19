#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

void Zombie::set_zombiename(const std::string& Zombie_name)
{
    this->name = Zombie_name;
}
void Zombie::announce()
{
    std::cout << name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() //destructor
{
    std:: cout << BOLDRED << UNDERLINE << name << " " << "destroyed" << RESET << std::endl;
}