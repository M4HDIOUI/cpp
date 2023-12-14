/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:09:04 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 12:29:06 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("omar");
    ClapTrap clapTrap2("omar2");

    clapTrap.attack("omar2");
    clapTrap2.takeDamage(5);
    clapTrap2.beRepaired(10);
    return 0;
}