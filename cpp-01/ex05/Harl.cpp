/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:25:44 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/19 01:55:30 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    typedef void (Harl::*harl)();

    harl    Levels[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++) {
        if(level == str[i])
            (this->*Levels[i])();
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