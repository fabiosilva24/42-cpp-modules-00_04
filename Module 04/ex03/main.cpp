#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	AMateria *ice_equipped = src->createMateria("ice");
	me->equip(ice_equipped);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	// Additional tests
	std::cout << "--- Additional Tests ---" << std::endl;

	// Test: Unequip and re-equip
	me->unequip(0); // This unequips the ice materia from slot 0
	std::cout << "Unequipped slot 0." << std::endl;
	delete ice_equipped; // Delete the unequipped ice materia to prevent leak
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "Re-equipped slot 0 with new Ice materia." << std::endl;

	me->use(0, *bob);

	// Test: Invalid materia type
	tmp = src->createMateria("fire");
	if (!tmp)
		std::cout << "Unknown materia type 'fire'." << std::endl;

	// Test: Full inventory
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp); // Should print "Inventory full"
	// Delete the materia that couldn't be equipped
	if (tmp)
		delete tmp;

	delete bob;
	delete me;
	delete src;
	return (0);
}