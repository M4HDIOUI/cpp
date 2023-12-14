/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:43:29 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/14 09:15:19 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog(Dog const &dog) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*dog.brain);
    this->type = dog.type;
}

Dog &Dog::operator=(Dog const &dog) {
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = dog.type;
    delete this->brain;
    this->brain = new Brain(*dog.brain);
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const {
    std::cout << "bark" << std::endl;
}