#ifndef WEAPON_HPP
#define  WEAPON_HPP

#include <iostream>
#define PINK "\033[35m"
#define RESET "\033[0m"


class Weapon{
    public:
        void setType(const std::string &new_type);
        std::string getType()const;
        Weapon(const std::string &type);

    private:
        std::string type;

};


#endif