/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 05:30:20 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/16 12:04:01 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"
# include <fstream>

class AForm;

class RobotomyRequestForm : public AForm
{
    private:
        std::string		_target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(std::string target, std::string name);
        RobotomyRequestForm(const RobotomyRequestForm &instance);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &instance);
        ~RobotomyRequestForm();

        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
        static AForm* create(std::string target, std::string name);
};

#endif