/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:37:59 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/16 21:13:13 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(char *str)
{
    std::string token;
    std::stringstream ss(str);
    while (std::getline(ss, token, ' '))
    {
        if (token != "+" && token != "-" && token != "*" && token != "/")
        {
                if (std::stoi(token) > 10)
                {
                    std::cout << "Error: number too big" << std::endl;
                    return ;
                }
        }
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (this->stack.size() < 2)
            {
                std::cout << "Error: not enough numbers in stack" << std::endl;
                return ;
            }
            int a = this->stack.top();
            this->stack.pop();
            int b = this->stack.top();
            this->stack.pop();
            if (token == "+")
                this->stack.push(b + a);
            else if (token == "-")
                this->stack.push(b - a);
            else if (token == "*")
                this->stack.push(b * a);
            else if (token == "/")
            {
                if (a == 0 || b == 0)
                    throw std::exception();
                this->stack.push(b / a);
            }
        }
        else
        {
                this->stack.push(std::stoi(token));
        }
        printf("%d\n", stack.top());
    }
    if (this->stack.size() != 1)
    {
        std::cout << "Error: too many numbers in stack" << std::endl;
        return ;
    }
    this->result = this->stack.top();
    std::cout << this->result << std::endl;
}

RPN::RPN(RPN const &copy)
{
    *this = copy;
}

RPN& RPN::operator=(RPN const &rpn)
{
    this->stack = rpn.stack;
    this->result = rpn.result;
    return (*this);
}

RPN::~RPN()
{
}