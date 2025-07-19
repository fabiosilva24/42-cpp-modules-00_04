#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap{

    public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();
    private:
        std::string  name;
        int hit_points;
        int attack_damage;
        int energy_points;
};


#endif