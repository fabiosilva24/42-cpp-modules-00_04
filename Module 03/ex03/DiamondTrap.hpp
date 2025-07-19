#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    virtual ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &other);
    void attack(const std::string &target);
    void whoAmI();
    DiamondTrap(const DiamondTrap &other);

    private:
        std::string name;

};

#endif