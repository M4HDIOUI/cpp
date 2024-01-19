/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:31:57 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/12 05:31:58 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->setName("default");
    this->setSignGrade(150);
    this->setExecGrade(150);
    this->setIsSigned(false);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->setName("RobotomyRequestForm");
    this->setSignGrade(72);
    this->setExecGrade(45);
    this->setIsSigned(false);
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance)
{
    *this = instance;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &instance)
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

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    GradeTooLowException low;
    FormNotSignedException notSigned;
    try
    {
        if (this->getIsSigned() == false)
            throw notSigned;
        else if (executor.getGrade() > this->getExecGrade())
            throw low;
        else
        {
            std::cout << "Drilllll... whirrrr... zzzzzzz... " << std::endl << this->_target 
            << " has been robotomized successfully 50% of the time." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}