#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), activated(false)
{
    std::cout << "ScavTrap Default constructor Called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 100;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), activated(false)
{
    std::cout << "ScavTrap constructor Called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 100;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor Called" << std::endl;
    this->activated = other.activated;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Assignement Operator" << std::endl;
    if (this != &other)
    {
        this->hit_points = other.hit_points;
        this->name = other.name;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
	if (this->activated == false)
	{
		this->activated = true;
		std::cout << this->name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << this->name << " is already in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

