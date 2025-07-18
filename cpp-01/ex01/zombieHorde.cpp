/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:10:24 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/24 16:03:59 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>

Zombie* zombieHorde( int N, std::string name ) 
{
    if (N <= 0)
        return 0;
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++) {
        zombies[i].setName(name);
    }
    return zombies;
}