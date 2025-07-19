#ifndef HARL_HPP
#define HARL_HPP

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"

#include <string>
#include <iostream>

class Harl{
    public:
        void complain( std::string level );

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};




#endif
