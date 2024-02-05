/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 05:55:57 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/05 12:47:21 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << "iterator :" << *it << std::endl;
        ++it;
    }

    std::cout << "----------------" << std::endl;

    std::vector<int> vector;

    vector.push_back(5);
    vector.push_back(17);
    vector.push_back(3);
    vector.push_back(5);
    vector.push_back(737);
    vector.push_back(0);
    std::vector<int>::iterator it2 = vector.begin();
    std::vector<int>::iterator ite2 = vector.end();

    while (it2 != ite2)
    {
        std::cout << "iterator :" << *it2 << std::endl;
        ++it2;
    }
    return 0;
}