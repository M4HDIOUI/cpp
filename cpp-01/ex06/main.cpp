/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:37:42 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/19 04:29:26 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "wrong arg" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(av[1]);
    return 0;
}