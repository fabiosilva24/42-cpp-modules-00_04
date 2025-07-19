#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/*int main(void)
{
	Weapon Sword;
	Sword.setType("Excalibur");
	HumanA human_a("Sin Jiwoo", Sword);
	human_a.attack();

	HumanB human_b;
	Weapon Sword2;

	//Weapon club;
	//club.setType("crude spiked club");
	human_b.set_name("Igris");
	//human_b.SetWeapon(club);
	human_b.attack();


}*/

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Usage: ./humans" << std::endl;
		return (1);
	}
	{
		Weapon Magic_Wand = Weapon("Hello Kitty Magic Wand");
		HumanA Bee("Bianca", Magic_Wand);
		Bee.attack();
		Magic_Wand.setType("Hello Kitty Maracas");
		Bee.attack();
	}
	{
		Weapon Hammer = Weapon("Hello Kitty Hammer");
		HumanB Fab("Fabio");
		Fab.SetWeapon(Hammer);
		Fab.attack();
		Hammer.setType("Hello Kitty Magic Wand");
		Fab.attack();
	}
	return (0);
}