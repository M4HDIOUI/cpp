/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:06:15 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/20 21:37:24 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    Bureaucrat B("bureaucrat", 2);
    AForm *f = new ShrubberyCreationForm("home");
    AForm *f2 = new RobotomyRequestForm("home");
    AForm *f3 = new PresidentialPardonForm("home");

    
    try
    {
        B.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        f->beSigned(B);
        f->execute(B);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        B.signForm(*f2);
        B.executeForm(*f2);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        f3->beSigned(B);
        f3->execute(B);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << B << std::endl;
    std::cout << *f << std::endl;
    delete f;
    delete f2;
    delete f3;
    return (0);
}