#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"



class Dog : public Animal{

    public :
        void makeSound() const;
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        Brain* get_brain() const;
        Dog();
        ~Dog();
    private:
            Brain *brain;
};





#endif