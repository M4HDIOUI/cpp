/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:26:47 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/16 14:04:19 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av) {
    (void)av;
    if (ac != 1) {
        std::cout << "no argument needed" << std::endl;
        return 0;
    }
    Zombie *zombie = newZombie("zombie");
    zombie->announce();
    randomChump("zombie111");
    delete zombie;
    return 0;
}