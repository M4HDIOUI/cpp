/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:42:07 by omahdiou          #+#    #+#             */
/*   Updated: 2023/12/06 18:59:28 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* meta[10];
    
    std::cout << "-------------------" << std::endl;
    int i = 0;
    while (i < 5)
    {
        meta[i] = new Dog();
        i++;
    }
    std::cout << "-------------------" << std::endl;
    while (i < 10)
    {
        meta[i] = new Cat();
        i++;
    }
    std::cout << "-------------------" << std::endl;
    i = 0;
    while (i < 10)
    {
        meta[i]->makeSound();
        i++;
    }
    std::cout << "-------------------" << std::endl;
    i = 0;
    while (i < 10)
    {
        delete meta[i];
        i++;
    }
}