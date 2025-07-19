#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < memsize; ++i)
		templates[i] = NULL;
	std::cout << "MateriaSource Constructor Called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < memsize; ++i)
		templates[i] = other.templates[i] ? other.templates[i]->clone() : NULL;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
    {
        return;
    }
    for (int i = 0; i < memsize; ++i)
    {
        if (templates[i] == NULL)
        {
            templates[i] = m;
            return;
        }
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < memsize; ++i)
	{
		if (templates[i] && templates[i]->getType() == type)
		{
			std::cout << "Creating new materia of type \"" << type << "\" from slot " << i << std::endl;
			return (templates[i]->clone());
		}
	}
	std::cout << "Unknown materia type \"" << type << "\"" << std::endl;
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < memsize; ++i)
		{
			templates[i] = NULL;
		}
		for (int i = 0; i < memsize; ++i)
			templates[i] = other.templates[i] ? other.templates[i]->clone() : NULL;
	}
	return (*this);
	std::cout << "MateriaSource assignment operator called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < memsize; ++i)
		delete templates[i];
	std::cout << "MateriaSource Destructor Called" << std::endl;
}