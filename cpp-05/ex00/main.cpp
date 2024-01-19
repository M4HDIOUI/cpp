/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:29:58 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/19 18:30:14 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b("omahdiou", 1);
    std::cout << b << std::endl;
    b.incrementGrade();
    std::cout << b << std::endl;
    b.decrementGrade();
    std::cout << b << std::endl;
    return 0;
}