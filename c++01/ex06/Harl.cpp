/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:05:34 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/06 16:57:14 by yarutiun         ###   ########.fr       */
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

void Harl::filter(std::string level)
{
    Harl harl;
    void (Harl::*complains[4]) () = 
    {
        &Harl::debug,
        &Harl::warning,
        &Harl::error,
        &Harl::info
    };
    std::string messages[4] = {"WARNING", "DEBUG", "INFO", "ERROR"};
    void (Harl::*ptrToDebug) () = &Harl::debug;
    void (Harl::*ptrToWarning) () = &Harl::warning;
    void (Harl::*ptrToError) () = &Harl::error;
    void (Harl::*ptrToInfo) () = &Harl::info;

    for(int i = 0; i < 4; i++)
    {
        if(level == messages[i])
        {
            switch (i)
            {

                case 0:
					while (i < 4)
						(this->*complains[i++])();
                    std::cout << std::endl;
					return ;
				case 1:
					while (i < 4)
						(this->*complains[i++])();
                    std::cout << std::endl;
					return ;
				case 2:
					while (i < 4)
						(this->*complains[i++])();
                    std::cout << std::endl;
					return ;
				case 3:
					while (i < 4)
						(this->*complains[i++])();
                    std::cout << std::endl;
					return ;
            }
        }
    }
    
}