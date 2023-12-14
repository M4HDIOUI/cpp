/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:29:39 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/22 19:43:53 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << name << " : is created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " : is destroyed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
