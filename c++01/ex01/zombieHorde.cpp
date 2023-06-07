/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:25:34 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 10:42:38 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;
    horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        
        horde[i].setName(name);
        horde[i].announce();
    }
    return(horde);
}

void Zombie::delZombie(Zombie *horde)
{
    delete [] horde;
}
