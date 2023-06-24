/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:44:26 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/23 14:38:22 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap jora("Jora");
    ScavTrap fedia("Fedia");
	FragTrap kiria("Kiria");
	
	jora.attack("Santiago");
	fedia.attack("yura");
    fedia.guardGate();
	kiria.highFivesGuys();
    return(0);
}