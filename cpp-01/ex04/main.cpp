/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:17:38 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/19 04:29:58 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

int main (int ac , char **av) {
    if (ac != 4) {
        std::cout << "wrong arg" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    std::ifstream inputfile(filename);
    if (!inputfile.is_open()) {
        std::cout << "error" << std::endl;
        return 1;
    }
    std::ofstream outputfile(filename + ".replace");
    if (!outputfile.is_open()) {
        std::cout << "error" << std::endl;
        inputfile.close();
        return 1;
    }
    std::string line;
    while (std::getline(inputfile, line)) {
        size_t i = 0;
        int lens1 = s1.length();
        int lens2 = s2.length();
        while ((i = line.find(s1, i)) != std::string::npos) {
            if (s1 == s2) {
                break;
            }
            line.erase(i, lens1);
            line.insert(i, s2);
            i += lens2;
        }
        outputfile << line << std::endl;
    }
    inputfile.close();
    outputfile.close();
    std::cout << "done" << std::endl;
    return 0;
}
