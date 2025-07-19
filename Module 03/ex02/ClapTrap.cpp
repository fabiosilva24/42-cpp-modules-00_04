#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("No_Name"), hit_points(10), attack_damage(0), energy_points(10)
{
    std::cout << "Default ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), attack_damage(0), energy_points(10)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
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
        int dmg_taken = (int)amount > hit_points ? hit_points : amount;

        this->hit_points -= dmg_taken;
        std::cout << this->name << " lost " << dmg_taken << " hit points" << std::endl;
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
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}
