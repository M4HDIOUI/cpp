/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:01:44 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/20 14:12:25 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
    private:
        int                FPV;
        static const int   fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &Fixed);
        Fixed& operator=(const Fixed &Fixed);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif