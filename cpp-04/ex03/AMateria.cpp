/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:46:08 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/14 09:02:42 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
    type = "AMateria";
}

AMateria::AMateria(std::string const & type) : type(type) {
}

AMateria::AMateria(AMateria const & materia) {
    *this = materia;
}

AMateria &AMateria::operator=(AMateria const & materia) {
    if (this != &materia)
        this->type = materia.type;
    return *this;
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
    return this->type;
}

unsigned int AMateria::getXP() const {
    return this->xp;
}

void AMateria::use(ICharacter& target) {
    (void)target;
    this->xp += 10;
}

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const & ice) : AMateria(ice) {
}

Ice &Ice::operator = (Ice const & ice) {
    if (this != &ice)
        this->type = ice.type;
    return *this;
}

Ice::~Ice() {
}

AMateria* Ice::clone() {
    return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->xp += 10;
}

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const & cure) : AMateria(cure) {
}

Cure &Cure::operator=(Cure const & cure) {
    if (this != &cure) {
        this->type = cure.type;
    }
    return *this;
}

Cure::~Cure() {
}

AMateria* Cure::clone() {
    return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    this->xp += 10;
}