#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << MAGENTA << "./Usage Harl_filter DEBUG, INFO, WARNING, ERROR" << RESET << std::endl;
        return 1;
    }
    std::string input = argv[1];
    Harl myharl;
    int levelIndex = -1;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (input == levels[i])
        {
            levelIndex = i;
            break;
        }
    }

    switch(levelIndex)
    {
        case 0:
            myharl.complain("DEBUG");
            break;
        case 1:
            myharl.complain("INFO");
            break;
        case 2:
            myharl.complain("WARNING");
            break;
        case 3:
            myharl.complain("ERROR");
            break;
        default:
            std::cout << YELLOW << "[ Probably complaining About Qwerty Keyboard ]" << RESET << std::endl;
    }
}