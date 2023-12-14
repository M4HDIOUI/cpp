/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:55:04 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/25 18:40:05 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
        private:
        int                FPV;
        static const int   fractionalBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int fp);
        Fixed(const float fp);
        Fixed(const Fixed &Fixed);
        Fixed& operator=(const Fixed &Fixed);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        Fixed   operator+(const Fixed &fixed);
        Fixed   operator-(const Fixed &fixed);
        Fixed   operator*(const Fixed &fixed);
        Fixed   operator/(const Fixed &fixed);
        bool    operator>(const Fixed &fixed);
        bool    operator<(const Fixed &fixed);
        bool    operator>=(const Fixed &fixed);
        bool    operator<=(const Fixed &fixed);
        bool    operator==(const Fixed &fixed);
        bool    operator!=(const Fixed &fixed);
        Fixed&   operator++(int);
        Fixed   operator++(void);
        Fixed&   operator--(int);
        Fixed   operator--(void);
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif