#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual void makeSound() const;
        virtual ~Dog();

    private:
        Brain* brain;
};

#endif