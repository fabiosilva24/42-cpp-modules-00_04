#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <iostream>
#include "Weapon.hpp"
#define RESET "\033[0m"
#define PASTEL_GREEN "\033[38;2;119;221;119m"


class HumanB{
    public:
        void attack(void);
        void set_name(const std::string &new_name);
        std::string get_name() const;
        void SetWeapon(Weapon &new_weapon);
        HumanB(const std::string &name);

    private:
        std::string name;
        Weapon *weapon;
};

#endif