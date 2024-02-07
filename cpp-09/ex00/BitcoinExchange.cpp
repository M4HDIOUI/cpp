/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:40:24 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/07 12:21:37 by omahdiou         ###   ########.fr       */
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


void date_is_valid(std::string date)
{
    std::string year;
    std::string month;
    std::string day;
    // printf("date: |%s|\n", date.c_str());
    // if (date[4] != '-' || date[7] != '-' || date.length() != 10)
    // {
    //     std::cout << "bad input" << std::endl;
    // }
    int pos = date.find("-");
    
    if (date.find("-") != std::string::npos)
    {
        year = date.substr(0, pos);
        month = date.substr(pos + 1, date.substr(pos + 1).find("-"));
        pos = date.find("-" , pos + 1);
        day = date.substr(pos + 1, date.substr(pos + 1).find("-"));
        std::cout << "year: " << year << std::endl;
        std::cout << "month: " << month << std::endl;
        std::cout << "day: " << day << std::endl;
    }
    else
    {
        std::cout << "bad input......." << std::endl;
    }
    if (year.length() != 4 || month.length() != 2 || day.length() != 2)
    {
        std::cout << "bad input33333" << std::endl;
    }
}

void price_is_valid(std::string price)
{
    float price_float = ft_stof(price);
    if (price_float < 0)
    {
        std::cout << "not positive number" << std::endl;
    }
    if (price_float > 100000)
    {
        std::cout << "too big number" << std::endl;
    }
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
            if (line.find("|") != std::string::npos)
            {
                date = line.substr(0, line.find("|") - 1);
                price = line.substr(line.find("|") + 1, line.length() - 1);
                date_is_valid(date);
                price_is_valid(price);
            }
            else
            {
                std::cout << "bad input---------" << std::endl;
            }
        }
    }
}