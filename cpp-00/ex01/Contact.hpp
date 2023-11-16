/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:59:04 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/15 03:59:05 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact
{
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darksecret;
    public:
        Contact();
        ~Contact();

        void    setfirstname(std::string firstname);
        void    setlastname(std::string lastname);
        void    setnickname(std::string nickname);
        void    setphonenumber(std::string phonenumber);
        void    setdarksecret(std::string darksecret);
        std::string getfirstname();
        std::string getlastname();
        std::string getnickname();
        std::string getphonenumber();
        std::string getdarksecret();
};

#endif