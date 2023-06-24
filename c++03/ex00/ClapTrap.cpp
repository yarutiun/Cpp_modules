/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:44:24 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/23 14:44:59 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("nameless claptrap"), _hp(10), _energy(10), _attack(10)
{
    std::cout << "🚧constructor called🚧" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _attack(10)
{
    std::cout << "🚧name assignment constructor called🚧" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "💀destructor called💀" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    *this = clap;
    std::cout << "🚧copy constructor called🚧" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    _name = clap._name;
    _hp = clap._hp;
    _energy = clap._energy;
    _attack = clap._attack;
    std::cout << "assignment operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks , causing " << _attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "Claptrap " << this->_name << " takes " << amount << " damage points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "Claptrap " << this->_name << " repairs " << amount << " hp bars" << std::endl;
    this->_hp+= amount;
}

bool ClapTrap::ifAlive(void)
{
    if(_energy < 0)
        return(1);
    if(_hp < 0)
        return(1);
    return(0);
}