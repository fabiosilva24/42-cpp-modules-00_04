#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unnamed"), ScavTrap("unnamed"), FragTrap("unnamed"), name("unnamed")
{
    std::cout << "DiamondTrap Default Constructor" << std::endl;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Assignement Operator" << std::endl;
    if (this != &other)
    {
        this->hit_points = other.hit_points;
        this->name = other.name;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}
void DiamondTrap::whoAmI()
{
    std::cout << "Hi my DiamondTrap name is " << this->name << std::endl;
    std::cout << "Hi my ClapTrap name is " << ClapTrap::name << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructor called" << std::endl;
}