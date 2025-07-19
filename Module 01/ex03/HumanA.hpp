#ifndef HUMANA_HPP
#define HUMANA_HPP


#include <iostream>
#include "Weapon.hpp"
#define HOTPINK "\033[38;2;255;105;180m"


class HumanA{
    public:
        void attack(void);
        void set_name(const std::string &new_name);
        std::string get_name() const;
        HumanA(const std::string &new_name, Weapon &weapon);


    private:
        std::string name;
        Weapon &weapon;
};

#endif
