/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:40:31 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/07 12:01:42 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./bitcoin [file]" << std::endl;
        return 1;
    }
    BitcoinExchange bitcoinExchange;
    bitcoinExchange.parseFile(av[1]);
    return 0;
}