/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:25:43 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 03:14:00 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & materiaSource) {
    *this = materiaSource;
}

MateriaSource &MateriaSource::operator=(MateriaSource const & materiaSource) {
    if (this != &materiaSource) {
        *this = materiaSource;
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->materia[i])
            delete this->materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
        if (!this->materia[i]) {
            this->materia[i] = materia;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materia[i] && materia[i]->getType() == type)
            return materia[i]->clone();
    }
    return NULL;
}