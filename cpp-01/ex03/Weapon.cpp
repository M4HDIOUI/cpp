/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:49:02 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/24 16:28:43 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {
    
}

std::string Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string type) 
{
    this->type = type;
}