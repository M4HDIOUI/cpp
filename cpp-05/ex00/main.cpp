/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:29:58 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/20 02:44:04 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat b("bureaucrat", 8);
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}