/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:13:26 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/21 21:05:11 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool _is_signed;
        int _sign_grade;
        int _exec_grade;
    public:
        AForm();
        AForm(std::string name, bool is_signed, int sign_grade, int exec_grade);
        AForm(const AForm &instance);
        AForm &operator=(const AForm &instance);
        virtual ~AForm();
        std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat &bureaucrat);
        void setName(std::string name);
        void setIsSigned(bool is_signed);
        void setSignGrade(int sign_grade);
        void setExecGrade(int exec_grade);
        virtual void execute(Bureaucrat const &executor) const = 0;

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
        
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const AForm& bc);

#endif