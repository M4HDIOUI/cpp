/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:18:57 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/01 05:49:17 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

span::span() {}

span::span(unsigned int n) {
    this->_n = n;
    this->_size = 0;
}

span::span(span const & src) {
    *this = src;
}

span::~span() {}

span &	span::operator=(span const & rhs) {
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_size = rhs._size;
        this->_numbers = rhs._numbers;
    }
    return *this;
}

void	span::addNumber(int n) {
    if (this->_size >= this->_n)
        throw std::exception();
    else
    {
        this->_numbers.push_back(n);
        this->_size++;
        std::sort(this->_numbers.begin(), this->_numbers.end());
    }
}

int span::shortestSpan() {
    int min = INT_MAX;
    std::vector<int>::iterator itb = this->_numbers.begin();
    std::vector<int>::iterator ite = this->_numbers.end();
    if (this->_size <= 1)
        throw std::exception();
    else
    {
        for (int i = 0; itb + i != ite - 1; i++)
        {
            if (*(itb +1) - *itb < min)
                min = *(itb + 1) - *itb;
        }
        return min;
    }
}

int span::longestSpan() {
    if (this->_size <= 1)
        throw std::exception();
    else
        return (*(_numbers.end() - 1) - *(_numbers.begin()));
}