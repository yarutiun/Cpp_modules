/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:23:58 by yarutiun          #+#    #+#             */
/*   Updated: 2023/05/31 22:20:29 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){ 

}

Contact::~Contact(){
    
}
void Contact::set_name(std::string string)
{
    this->_firstName = string;
}

void Contact::set_lastname(std::string string)
{
    this->_lastName = string;
}

void Contact::set_nickname(std::string string)
{
    this->_nickname = string;
}

void Contact::set_phone(std::string string)
{
    this->_phoneNum = string;
}

void Contact::set_secret(std::string string)
{
    this->_secret = string;
}

std::string Contact::getName(void)
{
    return (_firstName);
}

std::string Contact::getSurName(void)
{
    return (_lastName);
}

std::string Contact::getNickName(void)
{
    return (_nickname);
}

std::string Contact::getPhone(void)
{
    return (_phoneNum);
}

std::string Contact::getSecret(void)
{
    return (_secret);
}

void Contact::exiting(void)
{
    std::cout << "Boo by" << std::endl;
    exit(EXIT_SUCCESS);
}