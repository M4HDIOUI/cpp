/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:17:06 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/30 21:41:08 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    (void)av;
    if (ac != 1) {
        std::cerr << "wrong arg" << std::endl;
        return 1;
    }
    Harl harl;

    harl.complain("something");
    harl.complain("something");
    harl.complain("something");
    harl.complain("something");
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    return 0;
}