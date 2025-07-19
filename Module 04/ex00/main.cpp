#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testCorrectPolymorphism()
{
    std::cout << "=== CORRECT POLYMORPHISM TEST ===" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!
    meta->makeSound(); // will output the animal sound!
    
    delete meta;
    delete i;
    delete j;
}

void testWrongPolymorphism()
{
    std::cout << "\n=== WRONG POLYMORPHISM TEST ===" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongCat->getType() << " " << std::endl;
    
    wrongCat->makeSound(); // will output WrongAnimal sound (NOT polymorphic!)
    wrongMeta->makeSound(); // will output WrongAnimal sound
    
    delete wrongMeta;
    delete wrongCat;
}

int main()
{
    testCorrectPolymorphism();
    testWrongPolymorphism();
    
    return 0;
}