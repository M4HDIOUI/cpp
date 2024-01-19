/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:00:36 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/09 19:26:35 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::~ICharacter() {
}

Character::Character() {
}

Character::Character(std::string const & name) : name(name) {
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(Character const & character) {
    *this = character;
}

Character &Character::operator=(Character const & character) {
    if (this != &character) {
        this->name = character.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            this->inventory[i] = character.inventory[i]->clone();
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

std::string const & Character::getName() const {
    return this->name;
}

void Character::equip(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
        if (!this->inventory[i]) {
            this->inventory[i] = materia;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx <= 0 || idx >= 3) {
        delete this->inventory[idx];
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3 && this->inventory[idx])
        this->inventory[idx]->use(target);
}