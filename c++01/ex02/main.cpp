/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:56:53 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 13:44:21 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string hiBrain = "HI THIS IS BRAIN";
    std::string *stringPTR = &hiBrain;
    std::string& stringREF = hiBrain;
    std::cout << "Printing the memory addresses" << std::endl;
    std::cout << "Printing hiBrain address: ";
    std::cout << &hiBrain << std::endl;
    std::cout << "Printing stringPtr address: ";
    std::cout << stringPTR << std::endl;
    std::cout << "Printing stringRef address: ";
    std::cout << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Printing hiBrain value: ";
    std::cout << hiBrain << std::endl;
    std::cout << "Printing stringPtr value: ";
    std::cout << *stringPTR << std::endl;
    std::cout << "Printing stringRef value: ";
    std::cout << stringREF << std::endl;
    return 0;
}