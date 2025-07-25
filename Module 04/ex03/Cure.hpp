#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(Cure const &other);
    Cure &operator=(Cure const &other);
    virtual void use(ICharacter &target);
    virtual AMateria *clone() const;

private:
};

#endif