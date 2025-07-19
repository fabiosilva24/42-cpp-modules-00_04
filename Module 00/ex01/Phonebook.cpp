#include "Phonebook.hpp"

static std::string truncate(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return (str);
}
static bool is_digit(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return (false);
    }
    return (true);
}
static bool isWhitspacesonly(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isspace(str[i]))
            return (false);
    }
    return (true);
}
Phonebook::Phonebook() : index(0), contacts_tosearch(0) {}
void Phonebook::addContact(Contact& contact)
{
    std::string input;
    do
        {
            std::cout << "Enter first name : ";
            std::getline(std::cin, input);
            if (check_EOF())
                return ;
            if (input.empty() || isWhitspacesonly(input))
            {
                std::cout << "\n || Input Invalid or Empty || \n" << std::endl;
            }
        }while (input.empty() || isWhitspacesonly(input));
    contact.set_firstname(input);

    do
        {
            std::cout << "Enter last name : ";
            std::getline(std::cin, input);
            if (check_EOF())
                return ;
            if (input.empty() || isWhitspacesonly(input))
            {
                std::cout << "\n || Input Invalid or Empty || \n" << std::endl;
            }
        }while (input.empty() || isWhitspacesonly(input));
    contact.set_lastname(input);

    do
        {
            std::cout << "Enter nickname : ";
            std::getline(std::cin, input);
            if (check_EOF())
                return ;
            if (input.empty() || isWhitspacesonly(input))
            {
                std::cout << "\n || Input Invalid or Empty || \n" << std::endl;
            }
        }while (input.empty() || isWhitspacesonly(input));
    contact.set_nickname(input);

    do
        {
            std::cout << "Enter phonenumber : ";
            std::getline(std::cin, input);
            if (check_EOF())
                return ;
            if (!is_digit(input))
            {
                std::cout << "Phone Number can't have letters\n";
                continue;
            }
            if (input.empty() || isWhitspacesonly(input))
            {
                std::cout << "\n || Input Invalid or Empty || \n" << std::endl;
            }
        }while (input.empty() || isWhitspacesonly(input) || !is_digit(input));
    contact.set_phonenumber(input);

    do
        {
            std::cout << "Enter darkest secret : ";
            std::getline(std::cin, input);
            if (check_EOF())
                return ;
            if (input.empty() || isWhitspacesonly(input))
            {
                std::cout << "Input Invalid or Empty\n" << std::endl;
                continue;
            }
        }while (input.empty() || isWhitspacesonly(input));
    contact.set_darkestsecret(input);

    if (contacts_tosearch < 8)
        contacts_tosearch++;
    contacts[index] = contact; //overwrite oldest if full
    index = (index + 1) % 8;
}
void Phonebook::searchContact(const Contact& contact)
{
    (void)contact;
    Contact contactss;
    if (contacts_tosearch == 0 && contacts[0].get_firstname().empty())
    {
        std::cout << "No Contacts to search\n";
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "Firstname" << "|"
              << std::setw(10) << "Lastname" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << std::setw(10) << "--------------------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < contacts_tosearch; i++)
    {
        int index = i + 1;
        std::cout << std::setw(10) << index << "|"
                << std::setw(10) << truncate(contacts[i].get_firstname()) << "|"
                << std::setw(10) << truncate(contacts[i].get_lastname()) << "|"
                << std::setw(10) << truncate(contacts[i].get_nickname()) << "|" << std::endl;
    };
    list_index(contactss);
}

void Phonebook::list_index(Contact& contact)
{
    int list_index = 0;
    (void)contact;
    std::string input;

    while (true)
    {
        std::cout << "Enter an Index Number for more info or type BACK to go back\n";
        std::getline(std::cin, input);
        if (check_EOF())
            break;
        if (input[0] == '+')
        {
            std::cout << "|| '+' sign is not allowed. Enter a number between 1 and " << contacts_tosearch;
            continue;
        }
        if (input == "BACK" || input == "back")
        {
            return ;   // Wait for Enter
        }
        else
        {
            std::istringstream iss(input);
            if (iss >> list_index)
            {
                if (list_index >= 1 && list_index <= contacts_tosearch)
                {
                    list_index -= 1;
                    std::cout << "\nContact details:\n";
                    std::cout << "First Name: " << contacts[list_index].get_firstname() << std::endl;
                    std::cout << "Last Name: " << contacts[list_index].get_lastname() << std::endl;
                    std::cout << "Nickname: " << contacts[list_index].get_nickname() << std::endl;
                    std::cout << "Phone Number: " << contacts[list_index].get_phonenumber() << std::endl;
                    std::cout << "Darkest Secret: " << contacts[list_index].get_darkestsecret() << std::endl;
                }
                else
                    std::cout << "|| Index is out of range or " << "contact " << list_index << " not set yet ||\n\n";
            }
        }
    }
}




