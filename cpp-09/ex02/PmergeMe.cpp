/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:29:33 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/09 19:33:53 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void sort_vector(std::vector<std::pair<int, int> > &tmp, size_t i)
{
    if (i >= tmp.size())
        return;
    size_t min = i;
    for (size_t j = i + 1; j < tmp.size(); ++j)
    {
        if (tmp[j].first < tmp[min].first)
            min = j;
    }
    if (min != i)
        std::swap(tmp[i], tmp[min]);
    sort_vector(tmp, i + 1);
}

std::vector<int> generate_jacob_number(int size)
{
    std::vector<int> jac_num;
    jac_num.push_back(0);
    jac_num.push_back(1);
    for (int i = 2; i <= size; i++)
    {
        jac_num.push_back(jac_num[i - 1] + 2 * jac_num[i - 2]);
    }
    jac_num.erase(jac_num.begin());
    jac_num.erase(jac_num.begin());
    return jac_num;
}

PmergeMe::PmergeMe(char **str) {
    int i = 1;
    size_t j = 0;
    while (str[i])
    {
        // if (std::atoi(str[i]) < 0 || std::atoi(str[i]) > 100000)
        // {
        //     std::cout << "Error : bad argument" << std::endl;
        //     return ;
        // }
        // while(str[i][j])
        // {
        //     if (isdigit(str[i][j]) == 0)
        //     {
        //         std::cout << "Error : bad argument" << std::endl;
        //         return ;
        //     }
        //     j++;
        // }
        vector.push_back(std::atoi(str[i]));
        i++;
    }
    if (vector.size() % 2 != 0)
    {
        int tmp1 = vector[vector.size() - 1];
        std::cout << "chayt ===>" << tmp1 << std::endl;
        vector.pop_back();
    }
    j = 0;
    std::vector<std::pair<int,int> > tmp;
    while (j < vector.size())
    {
        if (vector[j] < vector[j + 1])
        {
            tmp.push_back(std::make_pair(vector[j + 1], vector[j]));
            j++;
        }
        else
        {
            tmp.push_back(std::make_pair(vector[j], vector[j + 1]));
            j++;
        }
        j++;
    }
    sort_vector(tmp, 0);
    // std::vector<std::pair<int, int> >::iterator itb = tmp.begin();
    // std::vector<std::pair<int, int> >::iterator ite4 = tmp.end();
    // while (itb != ite4)
    // {
    //     std::cout << itb->first << " " << itb->second << std::endl;
    //     itb++;
    // }
    std::vector<int> pend;
    std::vector<int> main;
    main.push_back(tmp[0].second);
    for (size_t k = 0; k < tmp.size(); k++)
        main.push_back(tmp[k].first);
    for (size_t k = 0; k < tmp.size() - 1; k++)
        pend.push_back(tmp[k + 1].second);
    // int size = main.size() ;
    std::vector<int> jac_num = generate_jacob_number(pend.size() + 1);
    int first;
    int last;
    for (size_t k = 0; k < pend.size(); k++)
    {
        first = jac_num[k];
        last = jac_num[k + 1];
        while (first < last)
        {
            if ((int)pend.size() <= last)
                last = pend.size();
            if(last <= first)
                break;
            std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), pend[last - 1]);
            main.insert(it, pend[last - 1]);
            last--;
        }
        if (main.size() > pend.size() + main.size() - 1)
            break;
    }
    
    std::vector<int>::iterator it = main.begin();
    std::vector<int>::iterator ite = main.end();
    while (it != ite)
    {
        std::cout << "main " << *it << std::endl;
        it++;
    }
}

PmergeMe::PmergeMe(PmergeMe const &copy) {
    *this = copy;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &copy) {
    if (this == &copy)
        return *this;
    this->vector = copy.vector;
    return *this;
}

PmergeMe::~PmergeMe() {
}


// str[i++] = str[i - 1] + 2 * str[i - 2];