/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:08:56 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/24 16:39:18 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av) {
    (void)av;
    if (ac != 1) {
        std::cout << "no argument needed" << std::endl;
        return 1;
    }
    int n = 5;
    Zombie *zombie = zombieHorde(n,"zombie");
    if (!zombie)
        return 1;
    for (int i = 0; i < n; i++) {
        zombie[i].announce();
    }
    delete[] zombie;
    return 0;
}