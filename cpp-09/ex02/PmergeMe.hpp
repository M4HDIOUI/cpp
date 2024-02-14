/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:14:41 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/13 13:57:37 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>

class PmergeMe {
    public:
        double start_time_vector;
        double start_time_deque;
        double end_time_vector;
        double end_time_deque;
        std::vector<int> main_vector;
        std::deque<int> main_deque;
        PmergeMe(char **str);
        PmergeMe(PmergeMe const &copy);
        PmergeMe& operator=(PmergeMe const &pmergeme);
        ~PmergeMe();

        void vector_sort(char **str);
        void deque_sort(char **str);
        void print(char **str);
        void print_time();
};
#endif