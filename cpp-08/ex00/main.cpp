/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:37:23 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/05 12:17:39 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(144);
    v.push_back(27);
    v.push_back(3);
    v.push_back(44);

    try {
        std::cout << *easyfind(v, 27) << std::endl;
        std::cout << *easyfind(v, 3) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
}