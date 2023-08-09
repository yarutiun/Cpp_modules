/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:58:48 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/08 09:27:06 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat a("Bill");
    Bureaucrat b("Bob");
    Bureaucrat c("Ben");
    Bureaucrat d("Butters");
    std::cout << b;
    try
    {
    Bureaucrat b(1);
    Bureaucrat a(160);
    Bureaucrat d(150);
    Bureaucrat c(0);
    b.incrementGrade();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return(0);
}