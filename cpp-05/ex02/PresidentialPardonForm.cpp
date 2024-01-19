/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:20:31 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/12 05:29:03 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->setName("default");
    this->setSignGrade(150);
    this->setExecGrade(150);
    this->setIsSigned(false);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    this->setName("PresidentialPardonForm");
    this->setSignGrade(25);
    this->setExecGrade(5);
    this->setIsSigned(false);
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance)
{
    *this = instance;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &instance)
{
    if (this != &instance)
    {
        this->setName(instance.getName());
        this->setSignGrade(instance.getSignGrade());
        this->setExecGrade(instance.getExecGrade());
        this->setIsSigned(instance.getIsSigned());
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    GradeTooLowException low;
    FormNotSignedException notSigned;
    try
    {
        if (executor.getGrade() > this->getExecGrade())
            throw low;
        else if (!this->getIsSigned())
            throw notSigned;
        else
            std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}