#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"
#include <string.h>
#include <iostream>
#include "AMateria.hpp"


class AMateria;


class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &other);


    private:
        static const int memsize = 4;
        AMateria* templates[memsize];

};





#endif