/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:27:28 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/27 04:35:49 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &serializer)
{
    *this = serializer;
}

Serializer &Serializer::operator=(Serializer const &serializer)
{
    if (this != &serializer)
    {
        *this = serializer;
    }
    return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}