/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:05 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/16 14:33:38 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();

        void    announce();
        void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif