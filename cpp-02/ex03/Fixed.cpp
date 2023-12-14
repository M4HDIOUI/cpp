/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:29:14 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/26 13:29:16 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    this->FPV = 0;
}
Fixed::~Fixed() {}

Fixed::Fixed(const int value) {
    this->FPV = value << fractionalBits;
}

Fixed::Fixed(const float value) {
    this->FPV = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &Fixed) {
    *this = Fixed;
}

Fixed& Fixed::operator=(const Fixed &Fixed) {
    if (this != &Fixed)
        this->FPV = Fixed.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const {
    return this->FPV;
}

void    Fixed::setRawBits(int const raw) {
    this->FPV = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)this->FPV / (float)(1 << fractionalBits));
}

int     Fixed::toInt(void) const {
    return (this->FPV >> fractionalBits);
}

Fixed  Fixed::operator+(const Fixed &fixed) {
    Fixed *tmp = new Fixed(*this);
    tmp->FPV += fixed.getRawBits();
    return *tmp;
}

Fixed  Fixed::operator-(const Fixed &fixed) {
    Fixed *tmp = new Fixed(*this);
    tmp->FPV -= fixed.getRawBits();
    return *tmp;
}

Fixed  Fixed::operator*(const Fixed &fixed) {
    Fixed *tmp = new Fixed(*this);
    tmp->FPV *= fixed.getRawBits() / (1 << fractionalBits);
    return *tmp;
}

Fixed  Fixed::operator/(const Fixed &fixed) {
    Fixed *tmp = new Fixed(*this);
    tmp->FPV /= fixed.getRawBits();
    return *tmp;
}

bool    Fixed::operator>(const Fixed &fixed) {
    return this->FPV > fixed.getRawBits();
}

bool    Fixed::operator<(const Fixed &fixed) {
    return this->FPV < fixed.getRawBits();
}

bool    Fixed::operator>=(const Fixed &fixed) {
    return this->FPV >= fixed.getRawBits();
}

bool    Fixed::operator<=(const Fixed &fixed) {
    return this->FPV <= fixed.getRawBits();
}

bool    Fixed::operator==(const Fixed &fixed) {
    return this->FPV == fixed.getRawBits();
}

bool    Fixed::operator!=(const Fixed &fixed) {
    return this->FPV != fixed.getRawBits();
}

Fixed& Fixed::operator++(int) {
    Fixed *tmp = new Fixed(*this);
    this->FPV++;
    return *tmp;
}

Fixed Fixed::operator++(void) {
    this->FPV++;
    return *this;
}

Fixed& Fixed::operator--(int) {
    Fixed *tmp = new Fixed(*this);
    this->FPV--;
    return *tmp;
}

Fixed Fixed::operator--(void) {
    this->FPV--;
    return *this;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a.toFloat() < b.toFloat())
        return a;
    else 
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.toFloat() < b.toFloat())
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.toFloat() > b.toFloat())
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a.toFloat() > b.toFloat())
        return a;
    else
        return b;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}