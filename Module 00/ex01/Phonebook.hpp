#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include  "eof_check.hpp"

class Phonebook{
    private:
        Contact contacts[8];
        int index;
        int contacts_tosearch;
    public:
            Phonebook();
            void addContact(Contact& contacts);
            void searchContact(const Contact& contact);
            void list_index(Contact& contact);
            void print_banner(void);
};

#endif