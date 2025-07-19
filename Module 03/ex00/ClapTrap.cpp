#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("No_Name"), hit_points(10), attack_damage(0), energy_points(10)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), attack_damage(0), energy_points(10)
{
    std::cout << "Constructor called" << std::endl;
}

 ClapTrap &ClapTrap::operator=(const ClapTrap &other)
 {
    if (this != &other)
    {
        this->hit_points = other.hit_points;
        this->attack_damage = other.attack_damage;
        this->energy_points = other.energy_points;
        this->name = other.name;
    }
    return *this;
 }

void ClapTrap::attack(const std::string& target)
{
    std::cout << this->name << " attacks " << target << ", " << "dealing " << this->attack_damage << " points of damage" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
        std::cout << " is already dead\n";
    else
    {
        this->hit_points -= amount;
        std::cout << this->name << " lost " << amount << " hit points" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
        std::cout << " doesn't have enough stamina" << std::endl;
    else if (this->hit_points == 0)
    {
        std::cout << "Can't repair " << name << " since it is already dead" << std::endl;
    }
    else
    {
        --this->energy_points;
        this->hit_points += amount;
        std::cout << this->name << " repaired itself " << "and healed " << amount << " hit points" << std::endl;
    } 
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}