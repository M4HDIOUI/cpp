/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:33:15 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/07 15:54:21 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
    private:
        std::stack<int> stack;
        int result;
    public:
        RPN(std::string str);
        RPN(RPN const &copy);
        RPN& operator=(RPN const &rpn);
        ~RPN();
};

#endif