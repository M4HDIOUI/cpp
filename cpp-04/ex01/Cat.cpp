/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:29:15 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/14 09:08:37 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(Cat const &cat) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*cat.brain);
    this->type = cat.type;
}

Cat &Cat::operator=(Cat const &cat) {
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = cat.type;
    delete this->brain;
    this->brain = new Brain(*cat.brain);
    return *this;
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
