#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact     contacts[8];
    int         count_of_contact;
    public:
        void    addcontact();
        void    searchcontact();
};

#endif