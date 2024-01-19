/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:18:36 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/12 05:19:25 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    _name = "default";
    _sign_grade = 150;
    _exec_grade = 150;
    _is_signed = false;
}

Form::Form(std::string name, bool is_signed, int sign_grade, int exec_grade)
{
    GradeTooHighException high;
    GradeTooLowException low;
    _name = name;
    try
    {
        if (sign_grade < 1)
        {
            _sign_grade = 1;
            throw high;
        }
        else if (sign_grade > 150)
        {
            _sign_grade = 150;
            throw low;
        }
        else
            _sign_grade = sign_grade;
    }
    catch(const std::exception& e)
    {
        throw;
    }
    try
    {
        if (exec_grade < 1)
        {
            _exec_grade = 1;
            throw high;
        }
        else if (exec_grade > 150)
        {
            _exec_grade = 150;
            throw low;
        }
        else
            _exec_grade = exec_grade;
    }
    catch(const std::exception& e)
    {
        throw;
    }
}

Form::Form(const Form &instance)
{
    *this = instance;
}

Form &Form::operator=(const Form &instance)
{
    this->_name = instance.getName();
    this->_sign_grade = instance.getSignGrade();
    this->_exec_grade = instance.getExecGrade();
    this->_is_signed = instance.getIsSigned();
    return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getIsSigned() const
{
    return this->_is_signed;
}

int Form::getSignGrade() const
{
    return this->_sign_grade;
}

int Form::getExecGrade() const
{
    return this->_exec_grade;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    GradeTooHighException high;
    GradeTooLowException low;
    
    if (_is_signed == true)
    {
        std::cout << "Form is already signed" << std::endl;
        return;
    }
    try
    {
        if (bureaucrat.getGrade() > this->_sign_grade)
            throw low;
        else if (bureaucrat.getGrade() < 1)
            throw high;
        else
            this->_is_signed = true;
    }
    catch(const std::exception& e)
    {
        throw;
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form is signed: " << form.getIsSigned() << std::endl;
    out << "Form sign grade: " << form.getSignGrade() << std::endl;
    out << "Form exec grade: " << form.getExecGrade() << std::endl;
    return out;
}