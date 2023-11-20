/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:23:01 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/18 18:03:56 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string.h>

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void        attack();
};

#endif