#include  "Phonebook.hpp"

bool check_EOF()
{
    if (std::cin.eof())
    {
        std::cout << "\n|| Ctrl D Detected. Exiting ||\n";
        return (true);
    }
    return (false);
}