/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:18:36 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/12 05:18:53 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{
    _name = "default";
    _sign_grade = 150;
    _exec_grade = 150;
    _is_signed = false;
}

AForm::AForm(std::string name, bool is_signed, int sign_grade, int exec_grade)
{
    GradeTooHighException high;
    GradeTooLowException low;
    _name = name;
    _is_signed = is_signed;
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

AForm::AForm(const AForm &instance)
{
    *this = instance;
}

AForm &AForm::operator=(const AForm &instance)
{
    this->_name = instance.getName();
    this->_sign_grade = instance.getSignGrade();
    this->_exec_grade = instance.getExecGrade();
    this->_is_signed = instance.getIsSigned();
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getIsSigned() const
{
    return this->_is_signed;
}

int AForm::getSignGrade() const
{
    return this->_sign_grade;
}

int AForm::getExecGrade() const
{
    return this->_exec_grade;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
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

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
    out << "AForm name: " << form.getName() << std::endl;
    out << "AForm is signed: " << form.getIsSigned() << std::endl;
    out << "AForm sign grade: " << form.getSignGrade() << std::endl;
    out << "AForm exec grade: " << form.getExecGrade() << std::endl;
    return out;
}