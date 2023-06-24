/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:44:26 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/22 12:32:25 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Santi("Santi");
    ClapTrap Jora("Jora");
    ClapTrap Someone;
    for(int i = 0; i < 10; i++)
        Santi.attack("Jora");
    Santi.takeDamage(3);
    Santi.beRepaired(4);
    return(0);
}