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
    std::getline(std::cin, _firstname);
    if(_firstname == "")
    {
        std::cout << "first name can't be empty" << std::endl;
        std::cout << "entre first name : ";
        std::getline(std::cin, _firstname);
    }
    std::cout << "entre last name : ";
    std::getline(std::cin, _lastname);
    if(_firstname == "")
    {
        std::cout << "last name can't be empty" << std::endl;
        std::cout << "entre last name : ";
        std::getline(std::cin, _lastname);
    }
    std::cout << "entre nickname : ";
    std::getline(std::cin, _nickname);
    if(_firstname == "")
    {
        std::cout << "nickname can't be empty" << std::endl;
        std::cout << "entre nickname : ";
        std::getline(std::cin, _nickname);
    }
    std::cout << "entre phone number : ";
    std::getline(std::cin, _phonenumber);
    if(_firstname == "")
    {
        std::cout << "phone number can't be empty" << std::endl;
        std::cout << "entre phone number : ";
        std::getline(std::cin, _phonenumber);
    }
    std::cout << "entre dark secret : ";
    std::getline(std::cin, _darksecret);
    if(_firstname == "")
    {
        std::cout << "dark secret can't be empty" << std::endl;
        std::cout << "entre dark secret : ";
        std::getline(std::cin, _darksecret);
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
    std::cout << contacts[0].getfirstname() << std::endl;
    std::cout << contacts[0].getlastname() << std::endl;
    std::cout << contacts[0].getnickname() << std::endl;
    std::cout << contacts[0].getphonenumber() << std::endl;
    std::cout << contacts[0].getdarksecret() << std::endl;
}

void    PhoneBook::searchcontact()
{
    std::cout << "searchcontact" << std::endl;
}

void    PhoneBook::printcontact()
{
    std::cout << "printcontact" << std::endl;
}
