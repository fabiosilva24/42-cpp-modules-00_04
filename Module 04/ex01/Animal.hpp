#ifndef ANIMAL_HPP
#define ANIMAL_HPP



#include <iostream>
#include <string>

class Animal{

    public:
        Animal();
        Animal(const std::string new_type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();

    protected:
        std::string type;
};





#endif