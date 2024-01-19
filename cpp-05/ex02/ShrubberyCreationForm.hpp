/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:37:29 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/12 05:37:30 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"
# include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string		_target;
        void writeTree() const;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &instance);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &instance);
        ~ShrubberyCreationForm();

        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
};

#endif