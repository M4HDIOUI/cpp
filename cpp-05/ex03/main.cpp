/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:27:45 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/21 22:45:19 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat chef("bureaucrat", 5);
    Intern intern;
    AForm *f;
    AForm *f2;
    AForm *f3;

    f = intern.makeForm("Shrubbery Creation", "home");
    f2 = intern.makeForm("Robotomy Request", "home");
    f3 = intern.makeForm("Presidential Pardon", "home");
    if (!f || !f2 || !f3)
        return (0);
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        chef.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        chef.signForm(*f);
        chef.executeForm(*f);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        f2->beSigned(chef);
        f2->execute(chef);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        chef.signForm(*f3);
        chef.executeForm(*f3);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << chef << std::endl;
    delete f;
    delete f2;
    delete f3;

    return (0);
}