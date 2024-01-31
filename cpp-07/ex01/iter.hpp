/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:52:18 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/31 18:53:48 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T&))
{
    for (int i = 0; i < len; i++)
    {
        f(arr[i]);
    }
}

template <typename T>
void iter(T *arr, int len, void (*f)(const T&))
{
    for (int i = 0; i < len; i++)
    {
        f(arr[i]);
    }
}
#endif