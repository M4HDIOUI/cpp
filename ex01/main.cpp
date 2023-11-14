#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int ac, char **av)
{
    PhoneBook phonebook;
    (void)av;
    if(ac != 1)
    {
        std::cout << "no argument needed" << std::endl;
        return 0;
    }
    while(1)
    {
        std::cout << "entre one of the folowing command : ADD - SEARCH - EXIT " << std::endl;
        std::cout << "entre your command : ";
        std::string command;
        std::getline(std::cin, command);
        if(command == "ADD")
            phonebook.addcontact();
        else if(command == "SEARCH")
            phonebook.searchcontact();
        else if(command == "EXIT")
            exit(0);
        else if(command == "")
        {
            std::cout << "entre one of the folowing command : ADD - SEARCH - EXIT " << std::endl;
            std::cout << "entre your command : ";
            std::getline(std::cin, command);
        }
    }
    return 0;
}
