#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    Character(const std::string &name);
    Character &operator=(Character const &other);
    ~Character();

    private : 
    static const int invsize = 4;
    std::string name;
    AMateria*   inv[invsize];
};

#endif