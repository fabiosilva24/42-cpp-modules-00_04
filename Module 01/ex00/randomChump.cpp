#include "Zombie.hpp"

void randomChump(std::string name)
{
   Zombie z1;
   z1.set_zombiename(name);
   z1.announce();
}