/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:40:24 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/07 15:30:40 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float  ft_stof(std::string str)
{
    float num;
    std::stringstream ss(str);

    ss >> num;
    return num;
}

BitcoinExchange::BitcoinExchange()
{
    std::ifstream fileStream("data.csv");
    std::string line;

    if (fileStream.is_open())
    {
        while (std::getline(fileStream, line))
        {
            std::string date = line.substr(0, line.find(","));
            std::string price = line.substr(line.find(",") + 1, line.length());
            this->data[date] = ft_stof(price);
        }
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
    this->data.insert(std::pair<std::string, float>(line.substr(0, line.find(",")), ft_stof(line.substr(line.find(",") + 1))));
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
    *this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &bitcoinExchange)
{
    this->data = bitcoinExchange.data;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}


int date_is_valid(std::string date)
{
    std::string year;
    std::string month;
    std::string day;
    int pos = date.find("-");
    
    if (date.find("-") != std::string::npos)
    {
        year = date.substr(0, pos);
        month = date.substr(pos + 1, date.substr(pos + 1).find("-"));
        pos = date.find("-" , pos + 1);
        day = date.substr(pos + 1, date.substr(pos + 1).find("-"));
    }
    else
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (1);
    }
    if (year.length() != 4 || month.length() != 2 || day.length() != 2)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (1);
    }
    if (ft_stof(year) < 2000 || ft_stof(year) > 2024)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (1);
    }
    if (ft_stof(month) < 1 || ft_stof(month) > 12)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (1);
    }
    if (ft_stof(day) < 1 || ft_stof(day) > 31)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return (1);
    }
    if (ft_stof(month) == 2 && ft_stof(day) > 29)
    { 
        std::cout << "Error: bad input => " << date << std::endl;
        return (1);
    }
    return (0);
}

int price_is_valid(std::string price)
{
    float price_float = ft_stof(price);
    if (price_float < 0)
    {
        std::cout << "Error: not positive number" << std::endl;
        return (1);
    }
    if (price_float > 100000)
    {
        std::cout << "Error: too big number" << std::endl;
        return (1);
    }
    return (0);
}

void BitcoinExchange::parseFile(std::string file)
{
    std::ifstream fileStream(file);
    std::string line;
    std::string date;
    std::string price;
    std::getline(fileStream, line);
    if (fileStream.is_open())
    {
        while(std::getline(fileStream, line))
        {
            if (line.find("|") == std::string::npos)
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            else
            {
                date = line.substr(0, line.find("|") - 1);
                price = line.substr(line.find("|") + 1, line.length() - 1);
                if (price_is_valid(price) == 1 || date_is_valid(date) == 1)
                    continue;
            }
            std::map<std::string, float>::iterator it;
            it = data.lower_bound(date);
            std::cout << it->first << " => " << price << " = " << it->second * ft_stof(price) << std::endl;
        }
    }
    else 
    {
        std::cout << "Unable to open file" << std::endl;
    }
}