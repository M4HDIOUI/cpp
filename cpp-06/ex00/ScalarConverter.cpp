/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:23:30 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/28 18:28:02 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConvert::ScalarConvert() {}

ScalarConvert::ScalarConvert(ScalarConvert const &scalarConvert)
{
    *this = scalarConvert;
}

ScalarConvert &ScalarConvert::operator=(ScalarConvert const &scalarConvert)
{
    if (this != &scalarConvert)
    {
        *this = scalarConvert;
    }
    return *this;
}

ScalarConvert::~ScalarConvert() {}
#include <iomanip>
void ScalarConvert::convert(std::string str)
{
    char *end;
    double res =  strtod(str.c_str(), &end);
    (void)res;
    if (str.length() == 1 && !isdigit(str[0]))
    {
        std::cout << "char: '" << str[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(*str.c_str()) << std::endl;
        std::cout << "float: " << std::fixed << static_cast<float>(*str.c_str()) << ".0f" << std::endl;
        std::cout << "double: " << std::fixed << static_cast<double>(*str.c_str()) << ".0" << std::endl;
    }
    else if (str.length() >= 1 && str.find('.') == std::string::npos && *end == '\0')
    {
        std::cout << "char: '" << static_cast<char>(std::atoi(str.c_str())) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(std::atoi(str.c_str())) << std::endl;
        std::cout << "float: " << static_cast<float>(std::atoi(str.c_str())) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(std::atoi(str.c_str())) << ".0" << std::endl;
    }
    else if (*end == 'f' && end[1] == '\0' && str.find('.') != std::string::npos)
    {
        std::cout << "char: '" << static_cast<char>(std::atoi(str.c_str())) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(std::atoi(str.c_str())) << std::endl;
        std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(std::atof(str.c_str())) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(std::atof(str.c_str())) << std::endl;
    }
    else if (*end == '\0' && str.find('.') != std::string::npos)
    {
        std::cout << "char: '" << static_cast<char>(std::atoi(str.c_str())) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(std::atof(str.c_str())) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(std::atof(str.c_str())) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(std::atof(str.c_str())) << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}