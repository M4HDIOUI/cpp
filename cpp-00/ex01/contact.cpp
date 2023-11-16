/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:59:00 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/15 03:59:01 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getfirstname()
{
    return firstname;
}

std::string Contact::getlastname()
{
    return lastname;
}

std::string Contact::getnickname()
{
    return nickname;
}

std::string Contact::getphonenumber()
{
    return phonenumber;
}

std::string Contact::getdarksecret()
{
    return darksecret;
}
void    Contact::setfirstname(std::string firstname)
{
    this->firstname = firstname;
}

void    Contact::setlastname(std::string lastname)
{
    this->lastname = lastname;
}

void   Contact::setnickname(std::string nickname)
{
    this->nickname = nickname;
}

void    Contact::setphonenumber(std::string phonenumber)
{
    this->phonenumber = phonenumber;
}

void    Contact::setdarksecret(std::string darksecret)
{
    this->darksecret = darksecret;
}