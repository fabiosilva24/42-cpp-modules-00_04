#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        void makeSound() const;  // Note: NOT virtual!
        std::string getType() const;
        virtual ~WrongAnimal();

    protected:
        std::string type;
};

#endif
