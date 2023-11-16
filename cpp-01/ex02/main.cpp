/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:08 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/16 14:53:35 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
    (void)av;
    if(ac != 1){
        std::cout << "no argument needed" << std::endl;
        return 0;
    }
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "the str address " << &str << std::endl;
    std::cout << "the ptr address " << ptr << std::endl;
    std::cout << "the ref address " << &ref << std::endl;

    std::cout << "the str value " << str << std::endl;
    std::cout << "the ptr value " << *ptr << std::endl;
    std::cout << "the ref value " << ref << std::endl;
}