/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:44:30 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/18 17:52:32 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string.h>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType();
        void        setType(std::string type);
};

#endif