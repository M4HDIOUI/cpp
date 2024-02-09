/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:14:41 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/09 11:29:36 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class PmergeMe {
    public:
        std::vector<int> vector;
        PmergeMe(char **str);
        PmergeMe(PmergeMe const &copy);
        PmergeMe& operator=(PmergeMe const &pmergeme);
        ~PmergeMe();
};
#endif