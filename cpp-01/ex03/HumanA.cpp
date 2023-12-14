/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:24:33 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/24 16:14:15 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    this->name = name;
}

HumanA::~HumanA() {
}

void   HumanA::attack() 
{
    std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
}
