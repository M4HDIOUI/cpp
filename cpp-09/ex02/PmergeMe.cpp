/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:29:33 by omahdiou          #+#    #+#             */
/*   Updated: 2024/02/14 18:24:08 by omahdiou         ###   ########.fr       */
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

std::vector<int> generate_jacob_number_vector(int size)
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

void PmergeMe::vector_sort(char **str)
{
    start_time_vector = clock();
    std::vector<int> vector;
    int i = 1;
    size_t j = 0;
    int tmp1 = 0;
    int flag = 0;
    while (str[i])
    {
        vector.push_back(std::atoi(str[i]));
        i++;
    }
    if (vector.size() % 2 != 0)
    {
        flag = 1;
        tmp1 = vector[vector.size() - 1];
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
    std::vector<int> pend;
    main_vector.push_back(tmp[0].second);
    for (size_t k = 0; k < tmp.size(); k++)
        main_vector.push_back(tmp[k].first);
    for (size_t k = 0; k <= tmp.size() - 1; k++)
        pend.push_back(tmp[k].second);
    std::vector<int> jac_num = generate_jacob_number_vector(pend.size() + 1);
    int first;
    int last;
    int m_p_size = pend.size() + main_vector.size() - 1;
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
            std::vector<int>::iterator it = std::lower_bound(main_vector.begin(), main_vector.end(), pend[last - 1]);
            main_vector.insert(it, pend[last - 1]);
            last--;
        }
        if (main_vector.size() >= (size_t)m_p_size)
            break;
    }
    if (flag == 1)
    {
        std::vector<int>::iterator iterator = std::lower_bound(main_vector.begin(), main_vector.end(), tmp1);
        main_vector.insert(iterator, tmp1);
    }
    end_time_vector = clock();
}

void sort_deque(std::deque<std::pair<int, int> > &tmp, size_t i)
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
    sort_deque(tmp, i + 1);
}

std::deque<int> generate_jacob_number_deque(int size)
{
    std::deque<int> jac_num;
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

void PmergeMe::deque_sort(char **str)
{
    start_time_deque = clock();
    std::deque<int> deque;
    int i = 1;
    size_t j = 0;
    int tmp1 = 0;
    int flag = 0;
    while (str[i])
    {
        deque.push_back(std::atoi(str[i]));
        i++;
    }
    if (deque.size() % 2 != 0)
    {
        flag = 1;
        tmp1 = deque[deque.size() - 1];
        deque.pop_back();
    }
    j = 0;
    std::deque<std::pair<int,int> > tmp;
    while (j < deque.size())
    {
        if (deque[j] < deque[j + 1])
        {
            tmp.push_back(std::make_pair(deque[j + 1], deque[j]));
            j++;
        }
        else
        {
            tmp.push_back(std::make_pair(deque[j], deque[j + 1]));
            j++;
        }
        j++;
    }
    sort_deque(tmp, 0);
    std::deque<int> pend;
    main_deque.push_back(tmp[0].second);
    for (size_t k = 0; k < tmp.size(); k++)
        main_deque.push_back(tmp[k].first);
    for (size_t k = 0; k <= tmp.size() - 1; k++)
        pend.push_back(tmp[k].second);
    std::deque<int> jac_num = generate_jacob_number_deque(pend.size() + 1);
    int first;
    int last;
    int m_p_size = pend.size() + main_deque.size() - 1;
    for (size_t k = 0; k < pend.size(); k++)
    {
        first = jac_num[k];
        last = jac_num[k + 1];
        while (first < last)
        {
            if ((int)pend.size() < last)
                last = pend.size();
            if(last <= first)
                break;
            std::deque<int>::iterator it = std::lower_bound(main_deque.begin(), main_deque.end(), pend[last - 1]);
            main_deque.insert(it, pend[last - 1]);
            last--;
        }
        if (main_deque.size() >= (size_t)m_p_size)
            break;
    }
    if (flag == 1)
    {
        std::deque<int>::iterator iterator = std::lower_bound(main_deque.begin(), main_deque.end(), tmp1);
        main_deque.insert(iterator, tmp1);
    }
    end_time_deque = clock();
}

void PmergeMe::print(char **str) {
    int i = 1;
    std::cout << "Before: ";
    while (str[i])
    {
        std::cout << str[i] << " ";
        i++;
    }
    std::cout << std::endl << "After: ";
    for (size_t i = 0; i < main_vector.size(); i++)
        std::cout << main_vector[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::print_time() {
    int len = this->main_vector.size();
    double vector_time = (double)(end_time_vector - start_time_vector) / CLOCKS_PER_SEC * 1e3;
    double deque_time = (double)(end_time_deque - start_time_deque) / CLOCKS_PER_SEC * 1e3;
    std::cout << "Time to process a range of " << len << " elements with std::vector : " << vector_time << "us" << std::endl;
    std::cout << "Time to process a range of " << len << " elements with std::deque : " << deque_time << "us" << std::endl;
}

int parse(char **str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if (std::atoi(str[i]) < 0 || std::atoi(str[i]) > 100000)
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        while(str[i][j])
        {
            if (isdigit(str[i][j]) == 0)
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
            j++;
        }
        i++;
    }
    return 0;
}

PmergeMe::PmergeMe(char **str) {
    if(parse(str) == 1)
        return;
    deque_sort(str);
    vector_sort(str);
    print(str);
    print_time();
}

PmergeMe::PmergeMe(PmergeMe const &copy) {
    *this = copy;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &copy) {
    if (this == &copy)
        return *this;
    this->main_vector = copy.main_vector;
    this->main_deque = copy.main_deque;
    return *this;
}

PmergeMe::~PmergeMe() {
}
