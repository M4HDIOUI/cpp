/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MitanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 05:56:00 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/01 09:39:57 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MITANSTACK_HPP
# define MITANSTACK_HPP

# include <iostream>

template <typename T>
class MitanStack {
    private:
        T	*_stack;
        int	_size;
        int	_capacity;
    public:
        MitanStack();
        MitanStack(int n);
        MitanStack(MitanStack const & src);
        MitanStack &operator=(MitanStack const & rhs);
        ~MitanStack();

        void push(T n);
        void pop();
        T top();
        int size();
        bool empty();
        int capacity();
};

#endif