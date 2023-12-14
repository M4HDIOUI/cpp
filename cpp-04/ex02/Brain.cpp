/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:46:50 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 18:51:24 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &instance)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = instance;
}

Brain &Brain::operator=(Brain const &instance)
{
    std::cout << "Brain assignement operator called" << std::endl;
    if (this != &instance)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = instance.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}