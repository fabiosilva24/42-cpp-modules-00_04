#include "FragTrap.hpp"

int main()
{
    FragTrap bia("Bianca");
    FragTrap joao("Joao");

    bia.attack("Joao");
    joao.takeDamage(10);
    joao.beRepaired(10);

    bia.highFivesGuys();
    joao.highFivesGuys();

    joao.attack("Bianca");
    bia.takeDamage(200);
    joao.beRepaired(10);

    bia.highFivesGuys();
}