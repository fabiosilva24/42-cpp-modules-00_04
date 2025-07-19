#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
const Wrong_Animal* meta = new Wrong_Animal();
const Wrong_Animal* i = new Wrong_Cat();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
meta->makeSound();
return 0;
}