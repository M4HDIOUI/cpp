/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:19:39 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/16 12:03:49 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(std::string target, std::string name);
        PresidentialPardonForm(const PresidentialPardonForm &instance);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &instance);
        ~PresidentialPardonForm();
        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
        static AForm* create(std::string target, std::string name);
};

#endif