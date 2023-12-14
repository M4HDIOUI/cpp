/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:51:08 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/25 18:17:00 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->FPV = 0;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->FPV = value << this->fractionalBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->FPV = roundf(value * (1 << this->fractionalBits));
}

float   Fixed::toFloat(void) const {
    return ((float)this->FPV / (float)(1 << this->fractionalBits));
}

int     Fixed::toInt(void) const {
    return (this->FPV >> this->fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
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

// Fixed& Fixed::operator<<(const Fixed &Fixed) {
//     std::cout << "Copy assignment operator called" << std::endl;
//     if (this != &Fixed)
//         this->FPV = Fixed.getRawBits();
//     return (*this);
// }

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const {
    return this->FPV;
}

void    Fixed::setRawBits(int const raw) {
    this->FPV = raw;
}