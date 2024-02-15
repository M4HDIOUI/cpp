/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:37:56 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/15 16:52:19 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./rpn \"[RPN expression]\"" << std::endl;
        return (1);
    }
    try {
        RPN rpn(av[1]);
    }
    catch (const std::exception& e){
        std::cout << "Error" << std::endl;
    }
    return (0);
}