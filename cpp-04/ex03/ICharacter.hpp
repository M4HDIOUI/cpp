/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:18:10 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/12 03:06:57 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter {
    public:
        virtual ~ICharacter();
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class  Character : public ICharacter {
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        Character();
        Character(std::string const & name);
        Character(Character const & character);
        Character &operator=(Character const & character);
        virtual ~Character();

        std::string const & getName() const;
        void equip(AMateria* materia);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif 