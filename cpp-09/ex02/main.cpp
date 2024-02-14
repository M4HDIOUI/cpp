/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:00:05 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/13 15:54:25 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Usage: ./pmergeme [number1] [number2] ... [numberN]" << std::endl;
        return 1;
    }
    PmergeMe pmergeMe(av);
    return 0;
}