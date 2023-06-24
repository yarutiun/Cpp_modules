/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:44:26 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/23 14:46:48 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap fedia("Fedia");
	ClapTrap yura("Yura");
	
    yura.attack("himself");
    yura.takeDamage(6);
	fedia.attack("yura");
	fedia.beRepaired(3);
    yura.attack("fedia");
	fedia.takeDamage(6);
    fedia.guardGate();
    return(0);
}