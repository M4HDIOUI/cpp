/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:36:20 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/19 04:02:05 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    std::string str[4] = {"debug", "info", "warning", "error"};
    int i = 0;
    while (i < 4) {
        if(level == str[i])
            break;
        i++;
    }
    switch(i) {
        case 0 :
            debug();
        case 1 :
            info();
        case 2 :
            warning();
        case 3 :
            error();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void    Harl::debug(void)
{
    std::cout << "[DEBUG]..." << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[INFO]..." << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[WARNING]..." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ERROR]..." << std::endl;
}