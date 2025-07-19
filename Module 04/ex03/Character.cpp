#include "Character.hpp"


Character::Character(const std::string &name) : name(name)
{
    for (int i = 0; i < invsize; ++i)
        inv[i] = NULL;
    std::cout << "Constructor Called" << std::endl;
}
std::string const& Character::getName() const
{
    return this->name;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 ||  idx >= invsize)
        return;
    if (inv[idx])
        inv[idx]->use(target);
}
void Character::equip(AMateria *m)
{
    if (!m)
        return ;
    for (int i = 0; i < invsize; ++i)
    {
        if (inv[i] == NULL)  //equipar sempre o primeiro slot
        {
            inv[i] = m;
            return ;
        }
    }
    std::cout << "Inventory full" << std::endl;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < invsize; ++i)
        {
            delete this->inv[i];
            this->inv[i] = other.inv[i] ? other.inv[i]->clone() : NULL;
        }
    }
    return *this;
}


void Character::unequip(int idx)
{
    if (idx < 0 || idx >= invsize)
        return ;
    inv[idx] = NULL;   //em vez de dar delete nos dizemos que a index do inv e null
}

Character::~Character()
{
    for (int i = 0; i < invsize; ++i)
    {
        if (inv[i])
            delete (this->inv[i]);
    }
}