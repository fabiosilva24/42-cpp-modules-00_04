#include "Phonebook.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    std::string command;
    Phonebook phonebook;
    Contact contacts;
    if (argc > 1)
    {
        std::cout << "Error Usage: ./Phonebook" << std::endl;
        return (1);
    }
    phonebook.print_banner();
    while (true)
    {
        std::cout << "Enter a command | ADD | SEARCH OR EXIT" << std::endl;
        std::getline(std::cin, command);
        if (check_EOF())
            break;
        if (command == "ADD" || command == "add")
            phonebook.addContact(contacts);
        else if (command == "SEARCH" || command == "search")
            phonebook.searchContact(contacts);
        else if (command == "EXIT" || command == "exit")
            break;
        else
            std::cout << "Invalid Command\n";
    }
    return (0);
}