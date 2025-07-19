#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"



class Cat : public Animal{

    public :
        void makeSound() const;
        Cat();
        Cat &operator=(const Cat &other);
        Cat(const Cat &other);
        ~Cat();
    
    private:
        Brain *brain;
};





#endif