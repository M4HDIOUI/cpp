/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:15:43 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 13:18:51 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " is created" << std::endl;
    this->hitpoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &FragTrap) : ClapTrap(FragTrap) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const ClapTrap &obj) {
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " is destroyed" << std::endl;
}

void FragTrap::attack(std::string const & target) {
    if (this->energyPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << "FragTrap " << this->name << " attack " << target << " ,causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->name << " high fives mode" << std::endl;
}