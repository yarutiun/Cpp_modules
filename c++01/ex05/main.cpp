/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:05:36 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/04 20:26:51 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl karen;
    karen.complain("DEBUG");
    std::cout << std::endl;
    karen.complain("INFO");
    std::cout << std::endl;
    karen.complain("WARNING");
    std::cout << std::endl;
    karen.complain("ERROR");
    std::cout << std::endl;
    karen.complain("SHUT UP KAREN");
    
}