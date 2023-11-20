/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:19:50 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/18 18:01:31 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    this->name = name;
}

void   HumanB::attack() 
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}