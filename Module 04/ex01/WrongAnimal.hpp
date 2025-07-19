#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP


#include <iostream>
#include <string>


class Wrong_Animal
{
    public:
        void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;
        

};


#endif