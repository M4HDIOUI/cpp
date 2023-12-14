/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:34:00 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 13:06:12 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap " << name << " is created" << std::endl;
    this->name = name;
    this->hitpoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = ClapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ClapTrap) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = ClapTrap.name;
    this->hitpoints = ClapTrap.hitpoints;
    this->energyPoints = ClapTrap.energyPoints;
    this->attackDamage = ClapTrap.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " is destroyed" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    if (this->energyPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attack " << target << " ,causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ((unsigned int)this->hitpoints > amount)
    {
        this->hitpoints -= amount;
        std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
    }
    else 
    {
        this->hitpoints = 0;
        std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0)
    {
        this->energyPoints -= 1;
        this->hitpoints += amount;
    }
    std::cout << "ClapTrap " << this->name << " be repaired " << amount << " points of damage!" << std::endl;
}