#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
}

void Brain::set_idea(int idx, const std::string &idea)
{
    if (idx >= 0 && idx < 100)
        ideas[idx] = idea;
}

const std::string Brain::get_idea(int idx) const
{
    return ideas[idx];
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain Copy Operator Called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}
Brain::Brain(const Brain &other)
{
    std::cout << "Brain copied" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}