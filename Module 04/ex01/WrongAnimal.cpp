#include "WrongAnimal.hpp"

std::string Wrong_Animal::getType() const
{
    return this->type;
}
void Wrong_Animal::makeSound() const
{
    std::cout << "AII" << std::endl;
}