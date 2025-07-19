#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* z = new Zombie();
    z->set_zombiename(name);
    return (z);
}