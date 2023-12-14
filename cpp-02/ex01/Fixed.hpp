/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:51:12 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/25 18:06:01 by omahdiou         ###   ########.fr       */
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
        Fixed(const int fp);
        Fixed(const float fp);
        Fixed(const Fixed &Fixed);
        Fixed& operator=(const Fixed &Fixed);
        // Fixed& operator<<(const Fixed &Fixed);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif