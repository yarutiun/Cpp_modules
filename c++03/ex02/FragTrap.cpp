/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:10:22 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/23 14:44:22 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "nameless FragTrap";
    _hp = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "🚧default constructor called🚧" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "💀default destructor called💀" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hp = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "🚧name assigning constructor called🚧" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    this->_attack = obj._attack;
    this->_energy = obj._energy;
    this->_hp = obj._hp;
    this->_name = obj._name;
    std::cout << "assigning operatoe called" << std::endl;
    return *this;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
    std::cout << "🚧copy constructor called🚧" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " attacks , causing " << _attack << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " takes " << amount << " damage points" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " repairs " << amount << " hp bars" << std::endl;
    this->_hp+= amount;
}

bool FragTrap::ifAlive(void)
{
    if(_energy < 0)
        return(1);
    if(_hp < 0)
        return(1);
    return(0);
}

void FragTrap::highFivesGuys(void)
{
    this->_energy--;
    if(this->ifAlive() == 1)
    {
        std::cout << "I think that " << this->_name << " is kinda dead..." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " Wants to high five! " << std::endl;
}
