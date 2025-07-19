#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const int size = 100;

	Animal *Animale[size];

	for (int i = 0; i < size / 2; ++i)
		Animale[i] = new Dog();
	for (int i = size / 2; i < size; ++i)
		Animale[i] = new Cat();
	for (int i = 0; i < size; ++i)
		Animale[i]->makeSound();
	for (int i = 0; i < size; ++i)
		delete Animale[i];
	Dog Joao;

	Joao.get_brain()->set_idea(0, "I want food");
    std::cout << "Joao is thinking : " << Joao.get_brain()->get_idea(0) << std::endl;

	Dog Joao_copy = Joao;

	Joao_copy.get_brain()->set_idea(0, "I wanna go outside");
    std::cout << "Joao_copy is thinking : " << Joao_copy.get_brain()->get_idea(0) << std::endl;
    
	Dog caio;

	caio.get_brain()->set_idea(0, "I want Water");
	std::cout << "Copy Assignment operator before -> " << "Caio is thinking : " << caio.get_brain()->get_idea(0) << std::endl;

	caio = Joao;
	std::cout << "Copy Assignment operator after -> " << "Caio is thinking : " << caio.get_brain()->get_idea(0) << std::endl;

}