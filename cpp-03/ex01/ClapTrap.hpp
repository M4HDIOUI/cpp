/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:34:22 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 13:02:15 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap {
    protected:
        std::string name;
        int hitpoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ClapTrap& operator=(const ClapTrap &obj);
        ~ClapTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif