/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:54:53 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/21 22:41:35 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &instance)
{
    *this = instance;
}

Intern &Intern::operator=(const Intern &instance)
{
    (void)instance;
    return *this;
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int i;
    AForm* form;
    std::string forms[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    AForm* (*formCreators[])(std::string target, std::string name) = {ShrubberyCreationForm::create, RobotomyRequestForm::create, PresidentialPardonForm::create};

    for (i = 0; i < 3; i++)
    {
        if (formName == forms[i])
        {
            form = formCreators[i](target, formName);
            std::cout << "Intern creates " << formName << std::endl;
            return form;
        }
    }
    if (i == 3)
        std::cout << "Intern can't create " << formName << std::endl;
    return NULL;
}