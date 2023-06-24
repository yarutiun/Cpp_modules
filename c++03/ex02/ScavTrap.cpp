/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:34:47 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/23 14:44:29 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "nameless ScavTrap";
    _hp = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "🚧default constructor called🚧" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "💀default destructor called💀" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hp = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "🚧name assigning constructor called🚧" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    this->_attack = obj._attack;
    this->_energy = obj._energy;
    this->_hp = obj._hp;
    this->_name = obj._name;
    std::cout << "assigning operatoe called" << std::endl;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    *this = obj;
    std::cout << "🚧copy constructor called🚧" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks , causing " << _attack << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "Scavtrap " << this->_name << " takes " << amount << " damage points" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "Scavtrap " << this->_name << " repairs " << amount << " hp bars" << std::endl;
    this->_hp+= amount;
}

bool ScavTrap::ifAlive(void)
{
    if(_energy < 0)
        return(1);
    if(_hp < 0)
        return(1);
    return(0);
}

void ScavTrap::guardGate(void)
{
    std::cout << this->_name << " Has entered a Gate keeper mode!" << std::endl;
}