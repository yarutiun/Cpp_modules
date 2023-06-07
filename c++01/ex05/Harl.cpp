/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:05:34 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/07 10:57:14 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

Harl::Harl(void)
{
    return ;    
}

Harl::~Harl(void)
{
    return ;   
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    Harl harl;
    void (Harl::*ptrToDebug) () = &Harl::debug;
    void (Harl::*ptrToWarning) () = &Harl::warning;
    void (Harl::*ptrToError) () = &Harl::error;
    void (Harl::*ptrToInfo) () = &Harl::info;
    if(level.compare("WARNING") == 0)
        (harl.*ptrToWarning) ();
    else if(level.compare("DEBUG") == 0)
        (harl.*ptrToDebug) ();
    else if(level.compare("INFO") == 0)
        (harl.*ptrToInfo) ();
    else if(level.compare("ERROR") == 0)
        (harl.*ptrToError) ();
    else
        std::cout << "Even your input is shit, not only service!!!" << std::endl;
}