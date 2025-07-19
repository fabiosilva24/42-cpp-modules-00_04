#ifndef ICE_HPP
#define ICE_HPP

#include  "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
    public:
    Ice();
    ~Ice();
    Ice &operator=(Ice const& other);
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
    Ice(Ice const& other);


    private:
};

#endif