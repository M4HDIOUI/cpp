/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:25:13 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/10 01:10:40 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    _name = "default";
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    _name = name;
    GradeTooHighException high;
    GradeTooLowException low;
    try
    {
        if (grade < 1)
        {
            grade = 1;
            throw high;
        }
        else if (grade > 150)
        {
            grade = 150;
            throw low;
        }
        else
            this->grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &instance)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = instance;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &instance)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    this->_name = instance.getName();
    this->grade = instance.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &outputStream, Bureaucrat const &instance)
{
    outputStream << instance.getName() << ", bureaucrat grade " << instance.getGrade() << std::endl;
    return outputStream;
}