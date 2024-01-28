/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:57:55 by omahdiou          #+#    #+#             */
/*   Updated: 2024/01/28 19:12:33 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T *arr;
        int len;
    public:
        Array();
        Array(unsigned int len);
        Array(Array const &array);
        Array &operator=(Array const &array);
        ~Array();

        T &operator[](int index);
        int size(void) const;
};

template <typename T>
Array<T>::Array()
{
    this->arr = NULL;
    this->len = 0;
}

template <typename T>
Array<T>::Array(unsigned int len)
{
    this->arr = new T[len];
    this->len = len;
}

template <typename T>
Array<T>::Array(Array const &array)
{
    *this = array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &array)
{
    if (this != &array)
    {
        this->arr = new T[array.len];
        this->len = array.len;
        for (int i = 0; i < array.len; i++)
        {
            this->arr[i] = array.arr[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete [] this->arr;
}

template <typename T>
T &Array<T>::operator[](int index)
{
    if (index >= this->len)
        throw std::exception();
    return this->arr[index];
}

template <typename T>
int Array<T>::size(void) const
{
    return this->len;
}

#endif