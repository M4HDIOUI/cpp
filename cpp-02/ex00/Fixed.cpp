/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:06:29 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/20 14:20:10 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
}

Fixed::Fixed(const Fixed &Fixed) {
}

Fixed& Fixed::operator=(const Fixed &Fixed) {
}

Fixed::~Fixed() {
}

int     Fixed::getRawBits(void) const {
    return this->FPV;
}

void    Fixed::setRawBits(int const raw) {
    this->FPV = raw;
}
