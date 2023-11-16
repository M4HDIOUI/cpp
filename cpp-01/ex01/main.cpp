/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:08:56 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/16 14:33:02 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av) {
    (void)av;
    if (ac != 1) {
        std::cout << "no argument needed" << std::endl;
        return 0;
    }
    Zombie *zombie = zombieHorde(5,"zombie");
    for (int i = 0; i < 5; i++) {
        zombie[i].announce();
    }
    delete[] zombie;
    return 0;
}