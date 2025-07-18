/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:59:12 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/20 20:37:47 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::addcontact() {
    Contact contact;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darksecret;
    std::cout << std::endl << "entre first name : ";
    if (std::getline(std::cin, _firstname).eof())
        return ;
    while(_firstname.empty()) {
        std::cout << "first name can't be empty" << std::endl;
        std::cout << "entre first name : ";
        if (std::getline(std::cin, _firstname).eof())
            return ;
    }
    std::cout << "entre last name : ";
    if (std::getline(std::cin, _lastname).eof())
        return ;
    while(_lastname.empty()) {
        std::cout << "last name can't be empty" << std::endl;
        std::cout << "entre last name : ";
        if (std::getline(std::cin, _lastname).eof())
            return ;
    }
    std::cout << "entre nickname : ";
    if (std::getline(std::cin, _nickname).eof())
        return ;
    while(_nickname.empty()) {
        std::cout << "nickname can't be empty" << std::endl;
        std::cout << "entre nickname : ";
        if (std::getline(std::cin, _nickname).eof())
            return ;
    }
    std::cout << "entre phone number : ";
    if (std::getline(std::cin, _phonenumber).eof())
        return ;
    while(_phonenumber.empty()) {
        std::cout << "phone number can't be empty" << std::endl;
        std::cout << "entre phone number : ";
        if (std::getline(std::cin, _phonenumber).eof())
            return ;
    }
    std::cout << "entre dark secret : ";
    if (std::getline(std::cin, _darksecret).eof())
        return ;
    while(_darksecret.empty()) {
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
    std::cout << std::endl << "---------> contact added successfully <---------" << std::endl;
    std::cout << std::endl;
}

std::string printcontact(std::string str) {
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


void    PhoneBook::searchcontact() {
    int i = -1;
    std::string index;
    std::cout << std::endl << "|     index|first name| last name|  nickname|" << std::endl;

     while (++i < 8 && contacts[i].getfirstname() != "") {
        std::cout << "|         " << i << "|";
        std::cout << printcontact(contacts[i].getfirstname());
        std::cout << printcontact(contacts[i].getlastname());
        std::cout << printcontact(contacts[i].getnickname()) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "entre contact index (between 0 and 7) : ";
    if (std::getline(std::cin, index).eof())
        return ;
    while(index.empty()) {
        std::cout << "index can't be empty" << std::endl;
        std::cout << "entre contact index : ";
        if (std::getline(std::cin, index).eof())
            return ;
    }
    (index.length() == 1) ? i = index[0] - '0' : i = -1;
    if (i < 0 || i > 7) {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    if (contacts[i].getfirstname() == "") {
        std::cout << "No contact found" << std::endl;
        return ;
    }
    std::cout << std::endl << "first name : " << contacts[i].getfirstname() << std::endl;
    std::cout << "last name : " << contacts[i].getlastname() << std::endl;
    std::cout << "nickname : " << contacts[i].getnickname() << std::endl;
    std::cout << "phone number : " << contacts[i].getphonenumber() << std::endl;
    std::cout << "dark secret : " << contacts[i].getdarksecret() << std::endl;
    std::cout << std::endl;
}
