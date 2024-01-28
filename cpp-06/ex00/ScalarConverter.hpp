/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:37:01 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/28 13:02:44 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>

class ScalarConvert
{
    public:
        ScalarConvert();
        ScalarConvert(ScalarConvert const &scalarConvert);
        ScalarConvert &operator=(ScalarConvert const &scalarConvert);
        ~ScalarConvert();

        class ImpossibleException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "impossible";
            }
        };

        class NonDisplayableException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Non displayable";
            }
        };

        static void convert(std::string str);
};

#endif