/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 01:29:41 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 10:43:45 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{   
    Zombie* horde;
    horde = zombieHorde(3, "John");
    // horde->delZombie(horde);
    delete [] horde;
    return 0;
}
