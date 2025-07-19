#include "Zombie.hpp"

int main()
{
    randomChump("StackZombie");
    Zombie* z2 = newZombie("HeapZombie");
    z2->announce();
    delete(z2); //free in cpp
}