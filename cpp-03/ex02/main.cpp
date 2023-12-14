/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:00:27 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 13:19:11 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap fragTrap("fragTrap");
    fragTrap.attack("target");
    fragTrap.highFivesGuys();
    return 0;
}