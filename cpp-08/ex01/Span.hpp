/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:17:44 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/05 12:43:47 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class span {
    private:
        unsigned int	_n;
        unsigned int	_size;
        std::vector<int>	_numbers;
        span();
    public:
        span(unsigned int n);
        span(span const & src);
        span &operator=(span const & rhs);
        ~span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};

#endif