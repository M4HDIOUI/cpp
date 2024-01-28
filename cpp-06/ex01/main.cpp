/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:54:39 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/28 09:44:08 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void)
{
    Data *data = new Data();
    data->s1 = "Hello World!";
    data->n = 42;
    uintptr_t raw = Serializer::serialize(data);

    std::cout << raw << std::endl;
    
    Data *data2 = Serializer::deserialize(raw);
    std::cout << data2->s1 << std::endl;
    std::cout << data2->n << std::endl;
    return 0;
}