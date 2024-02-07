/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:40:28 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/07 12:05:07 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange
{
    public:
        std::map<std::string, float> data;
        
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange& operator=(BitcoinExchange const &bitcoinExchange);
        ~BitcoinExchange();

        void parseFile(std::string file);
};


#endif