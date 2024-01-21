/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:25:13 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/20 21:18:42 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;

    if (grade < 1)
    {
        grade = 1;
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        grade = 150;
        throw GradeTooLowException();
    }
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &instance)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = instance;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &instance)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
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
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
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

void Bureaucrat::signForm(AForm &form)
{
    if (form.getIsSigned())
    {
        std::cout << _name << "couldn't sign" << form.getName() << " is already signed" << std::endl;
        return ;
    }
    else if (form.getSignGrade() < grade)
    {
        std::cout << _name << "couldn't sign" << form.getName() << " because his grade is too low" << std::endl;
        return ;
    }
    else
    {
        std::cout << _name << " signs " << form.getName() << std::endl;
        form.setIsSigned(true);
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
    if (!form.getIsSigned())
    {
        std::cout << _name << "couldn't execute" << form.getName() << " because it's not signed" << std::endl;
        return ;
    }
    else if (form.getSignGrade() < grade)
    {
        std::cout << _name << "couldn't execute" << form.getName() << " because his grade is too low" << std::endl;
        return ;
    }
    else
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &outputStream, Bureaucrat const &instance)
{
    outputStream << instance.getName() << ", bureaucrat grade " << instance.getGrade() << std::endl;
    return outputStream;
}