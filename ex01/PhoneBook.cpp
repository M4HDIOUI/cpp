#include "PhoneBook.hpp"

void    PhoneBook::addcontact()
{
    Contact contact;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darksecret;
    std::cout << "entre first name : ";
    if (std::getline(std::cin, _firstname).eof())
        return ;
    while(_firstname.empty())
    {
        std::cout << "first name can't be empty" << std::endl;
        std::cout << "entre first name : ";
        if (std::getline(std::cin, _firstname).eof())
            return ;
    }
    std::cout << "entre last name : ";
    if (std::getline(std::cin, _lastname).eof())
        return ;
    while(_lastname.empty())
    {
        std::cout << "last name can't be empty" << std::endl;
        std::cout << "entre last name : ";
        if (std::getline(std::cin, _lastname).eof())
            return ;
    }
    std::cout << "entre nickname : ";
    if (std::getline(std::cin, _nickname).eof())
        return ;
    while(_nickname.empty())
    {
        std::cout << "nickname can't be empty" << std::endl;
        std::cout << "entre nickname : ";
        if (std::getline(std::cin, _nickname).eof())
            return ;
    }
    std::cout << "entre phone number : ";
    if (std::getline(std::cin, _phonenumber).eof())
        return ;
    while(_phonenumber.empty())
    {
        std::cout << "phone number can't be empty" << std::endl;
        std::cout << "entre phone number : ";
        if (std::getline(std::cin, _phonenumber).eof())
            return ;
    }
    std::cout << "entre dark secret : ";
    if (std::getline(std::cin, _darksecret).eof())
        return ;
    while(_darksecret.empty())
    {
        std::cout << "dark secret can't be empty" << std::endl;
        std::cout << "entre dark secret : ";
        if (std::getline(std::cin, _darksecret).eof())
            return ;
    }
    contact.setfirstname(_firstname);
    contact.setlastname(_lastname);
    contact.setnickname(_nickname);
    contact.setphonenumber(_phonenumber);
    contact.setdarksecret(_darksecret);
    if (count_of_contact == 8)
        count_of_contact = 0;
    contacts[count_of_contact] = contact;
    count_of_contact++;
    std::cout << "---------> contact added successfully <---------" << std::endl;
    // std::cout << contacts[0].getfirstname() << std::endl;
    // std::cout << contacts[0].getlastname() << std::endl;
    // std::cout << contacts[0].getnickname() << std::endl;
    // std::cout << contacts[0].getphonenumber() << std::endl;
    // std::cout << contacts[0].getdarksecret() << std::endl;
}

std::string print_case(std::string str) {
    if (str.length() > 10) {
        str.resize(9);
        str.append(".");
    }
    else if (str.length() < 10) {
        while (str.length() < 10)
            str.insert(0, " ");
    }

    return (str + "|");
}


void    PhoneBook::searchcontact()
{
    int i = -1;
    std::cout << std::endl << "|     index|first name| last name|  nickname|" << std::endl;

     while (++i < 8 && contacts[i].getfirstname().length() > 0) {
        std::cout << "|         " << i << "|";
        std::cout << print_case(contacts[i].getfirstname());
        std::cout << print_case(contacts[i].getlastname());
        std::cout << print_case(contacts[i].getnickname()) << std::endl;
    }
}

void    PhoneBook::printcontact()
{
    std::cout << "printcontact" << std::endl;
}
