/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:27:02 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 18:33:44 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance)
{
    *this = instance;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &instance)
{
    if (this != &instance)
        this->type = instance.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}