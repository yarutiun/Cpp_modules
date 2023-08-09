/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:58:48 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/09 15:54:55 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    // Bureaucrat a("Bill");
    Bureaucrat b("Bob");
    Bureaucrat c(2);
    Bureaucrat d("Butters");
    Form a("superform", 12, 14);
    std::cout << b; // 75 bruh
    try
    {
    Bureaucrat b(2);
    // Bureaucrat a(160);
    Bureaucrat d(150);
    // Bureaucrat c(0);
    b.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        a.beSigned(c);
        a.beSigned(b); //b is 75 now as default
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}