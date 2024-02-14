/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:40:31 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/14 17:56:38 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// std::string parse_data(std::string line)
// {
//     int i = 0;
//     std::string str;
//     while(str[i])
//     {
//         if (str[i] == ' ')
//         {
            
//         }
//         i++;
//     }    
// }

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./bitcoin [file]" << std::endl;
        return 1;
    }
    // try {
        BitcoinExchange bitcoinExchange;
        bitcoinExchange.parseFile(av[1]);
    // }
    // catch (std::exception& e)
    // {
        // std::cout << "bad";
    // }
    return 0;
}