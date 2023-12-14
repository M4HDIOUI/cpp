/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:36:47 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 03:18:41 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string type;
        unsigned int xp;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & materia);
        AMateria &operator=(AMateria const & materia);
        virtual ~AMateria();

        std::string const & getType() const;
        unsigned int getXP() const;

        virtual AMateria* clone() = 0;
        virtual void use(ICharacter& target);
};

class Ice : public AMateria {
    public:
        Ice();
        Ice(Ice const & ice);
        Ice &operator=(Ice const & ice);
        virtual ~Ice();

        virtual AMateria* clone();
        virtual void use(ICharacter& target);
};

class Cure : public AMateria {
    public:
        Cure();
        Cure(Cure const & cure);
        Cure &operator=(Cure const & cure);
        virtual ~Cure();

        virtual AMateria* clone();
        virtual void use(ICharacter& target);
};

#endif