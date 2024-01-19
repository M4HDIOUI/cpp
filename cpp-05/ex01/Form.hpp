/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:13:26 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/10 01:32:27 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool _is_signed;
        int _sign_grade;
        int _exec_grade;
    public:
        Form();
        Form(std::string name, bool is_signed, int sign_grade, int exec_grade);
        Form(const Form &instance);
        Form &operator=(const Form &instance);
        ~Form();
        std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Form& bc);

#endif