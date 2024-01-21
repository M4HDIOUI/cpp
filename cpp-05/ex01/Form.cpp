/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:18:36 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/20 03:36:49 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default")
{
    _sign_grade = 150;
    _exec_grade = 150;
    _is_signed = false;
}

Form::Form(std::string name, bool is_signed, int sign_grade, int exec_grade) : _name(name)
{
    if (sign_grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (sign_grade > 150)
    {
        throw GradeTooLowException();
    }
    else
        _sign_grade = sign_grade;

    if (exec_grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (exec_grade > 150)
    {
        throw GradeTooLowException();
    }
    else
        _exec_grade = exec_grade;
}

Form::Form(const Form &instance)
{
    *this = instance;
}

Form &Form::operator=(const Form &instance)
{
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

void Form::setIsSigned(bool is_signed)
{
    this->_is_signed = is_signed;
}

void Form::beSigned(Bureaucrat &bureaucrat)
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