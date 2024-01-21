/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:18:36 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/21 21:15:07 by omahdiou         ###   ########.fr       */
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
    _name = name;
    _is_signed = is_signed;
    if (sign_grade < 1)
    {
        _sign_grade = 1;
        throw GradeTooHighException();
    }
    else if (sign_grade > 150)
    {
        _sign_grade = 150;
        throw GradeTooLowException();
    }
    else
        _sign_grade = sign_grade;

    if (exec_grade < 1)
    {
        _exec_grade = 1;
        throw GradeTooHighException();
    }
    else if (exec_grade > 150)
    {
        _exec_grade = 150;
        throw GradeTooLowException();
    }
    else
        _exec_grade = exec_grade;
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
    if (_is_signed == true)
    {
        std::cout << "Form is already signed" << std::endl;
        return;
    }
    if (bureaucrat.getGrade() > this->_sign_grade)
        throw GradeTooLowException();
    else if (bureaucrat.getGrade() < 1)
        throw GradeTooHighException();
    else
        this->_is_signed = true;
}

void AForm::setName(std::string name)
{
    this->_name = name;
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

void AForm::setIsSigned(bool is_signed)
{
    this->_is_signed = is_signed;
}

void AForm::setSignGrade(int sign_grade)
{
    this->_sign_grade = sign_grade;
}

void AForm::setExecGrade(int exec_grade)
{
    this->_exec_grade = exec_grade;
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form not signed";
}
