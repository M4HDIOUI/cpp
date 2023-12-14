/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:39:31 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 13:07:44 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " is created" << std::endl;
    this->hitpoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap) : ClapTrap(ScavTrap) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ClapTrap &obj) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " is destroyed" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
    if (this->energyPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << "ScavTrap " << this->name << " attack " << target << " ,causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode" << std::endl;
}