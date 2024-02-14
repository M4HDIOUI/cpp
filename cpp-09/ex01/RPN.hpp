/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:33:15 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/14 13:52:49 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <exception>

class RPN
{
    private:
        std::stack<int> stack;
        int result;
    public:
        RPN(char *str);
        RPN(RPN const &copy);
        RPN& operator=(RPN const &rpn);
        ~RPN();
};

#endif