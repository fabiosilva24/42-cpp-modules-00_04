#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Joao");

    scav.guardGate();
    scav.guardGate();
    scav.attack("Fabio");
    scav.takeDamage(100);
    scav.beRepaired(10);

}