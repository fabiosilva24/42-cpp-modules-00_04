#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define BOLDRED    "\033[1;31m"
#define CYANBG     "\033[46m"
#define UNDERLINE  "\033[4m"


#include <string>
#include <iostream>
#include <cstddef>

class  Zombie{
    private:
            std::string name;


    public:
            Zombie();
            void announce( void );
            void set_zombiename(const std::string& Zombie_name);
            ~Zombie();


};
Zombie* zombieHorde( int N, std::string name );





#endif