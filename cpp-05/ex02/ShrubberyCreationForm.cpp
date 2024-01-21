/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:38:01 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/20 21:20:58 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->setSignGrade(150);
    this->setExecGrade(150);
    this->setIsSigned(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    this->setSignGrade(145);
    this->setExecGrade(137);
    this->setIsSigned(false);
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &instance)
{
    *this = instance;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &instance)
{
    if (this != &instance)
    {
        this->setSignGrade(instance.getSignGrade());
        this->setExecGrade(instance.getExecGrade());
        this->setIsSigned(instance.getIsSigned());
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void ShrubberyCreationForm::writeTree() const
{
    std::ofstream file(this->_target + "_shrubbery");
    if (file.is_open())
    {
        file << "       _-_" << std::endl;
        file << "    /~~   ~~\\" << std::endl;
        file << " /~~         ~~\\" << std::endl;
        file << "{               }" << std::endl;
        file << " \\  _-     -_  /" << std::endl;
        file << "   ~  \\\\ //  ~" << std::endl;
        file << "       | |     " << std::endl;
        file << "       | |     " << std::endl;
        file << "      // \\\\" << std::endl;
        file.close();
    }
    else
        std::cout << "Error opening file" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
        if (this->getIsSigned() == false)
            throw FormNotSignedException();
        else if (executor.getGrade() > this->getExecGrade())
            throw GradeTooLowException();
        else
            this->writeTree();
}