#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>
#include <string>

class Brain{
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        void set_idea(int idx, const std::string &idea);
        const std::string get_idea(int idx) const;
        ~Brain();

    protected:
    std::string ideas[100];

};

#endif