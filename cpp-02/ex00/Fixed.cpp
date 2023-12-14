/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:06:29 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/22 14:49:31 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->FPV = 0;
}

Fixed::Fixed(const Fixed &Fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = Fixed;
}

Fixed& Fixed::operator=(const Fixed &Fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &Fixed)
        this->FPV = Fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->FPV;
}

void    Fixed::setRawBits(int const raw) {
    this->FPV = raw;
}
