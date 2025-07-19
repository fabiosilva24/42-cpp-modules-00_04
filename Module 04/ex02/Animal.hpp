#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual void makeSound() const = 0;  // Pure virtual - makes class abstract
        std::string getType() const;
        virtual ~Animal();

    protected:
        std::string type;
};

#endif