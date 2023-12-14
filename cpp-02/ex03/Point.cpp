/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:35:53 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/26 13:40:30 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed& x, const Fixed& y) : x(x) y(y) {}

Point::Point(const Point &point) : x(point.x), y(point.y) {}

Point& Point::operator=(const Point &point) {
    if (this != &point) {
        this->x = point.x;
        this->y = point.y;
    }
    return (*this);
}