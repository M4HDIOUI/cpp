/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:31:37 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 05:43:51 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap {
    private:
        std::string name;
        int hitpoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ClapTrap& operator=(const ClapTrap &ClapTrap);
        ~ClapTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif