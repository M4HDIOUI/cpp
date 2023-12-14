/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:30:00 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 18:30:14 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &instance)
{
    *this = instance;
}

WrongCat &WrongCat::operator=(WrongCat const &instance)
{
    if (this != &instance)
        this->type = instance.type;
    return *this;
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}

std::ostream &operator<<(std::ostream &out, WrongCat const &instance)
{
    out << instance.getType();
    return out;
}