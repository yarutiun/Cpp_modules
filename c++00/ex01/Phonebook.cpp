/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:40:37 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 00:38:29 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
PhoneBook::PhoneBook()
{
    this->index = 0;
}



PhoneBook::~PhoneBook()
{
    
}

int PhoneBook::search(int indexing)
{
    std::cout << "|" << std::setw(10) << "Index";
			std::cout << "|" << std::setw(10) << "First Name";
			std::cout << "|" << std::setw(10) << "Last Name";
			std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			for (int i = 0; i < index; ++i) {
				std::cout << "|" << std::setw(10) << i;
                std::cout << "|";
                if(get_contact(i).getName().length() > 10)
				    std::cout << std::setw(10) << (get_contact(i).getName().substr(0, 9) + ".");
                else if(get_contact(i).getName().length() < 10)
                    std::cout << std::setw(10) << get_contact(i).getName().substr(0, 9);
				std::cout << "|";
                if(get_contact(i).getSurName().length() > 10)
                    std::cout << std::setw(10) << (get_contact(i).getSurName().substr(0, 9) + ".");
                else if(get_contact(i).getSurName().length() < 10)
                    std::cout << std::setw(10) << get_contact(i).getSurName().substr(0, 9);
                std::cout << "|";
                if(get_contact(i).getNickName().length() > 10)
                    std::cout << std::setw(10) << (get_contact(i).getNickName().substr(0, 9) + ".") << "|" << std::endl;
                else if(get_contact(i).getNickName().length() < 10)
				    std::cout << std::setw(10) << get_contact(i).getNickName().substr(0, 10) << "|" << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
        }
        std::cout << "Enter an index of a contact (only an integer)" << std::endl;
        while (!(std::cin >> indexing) || indexing > 7 || indexing < 0)
        {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();               // Clear error flags
            std::cin.ignore(100, '\n');     // Discard invalid input from the stream
        }
        if(indexing > index)
        {
            std::cout << "There's no contact" << std::endl;
            return 1;
        }
        std::cout << get_contact(indexing).getName() << std::endl;
        std::cout << get_contact(indexing).getSurName() << std::endl;
        std::cout << get_contact(indexing).getNickName() << std::endl;
        std::cout << get_contact(indexing).getPhone() << std::endl;
        std::cout << get_contact(indexing).getSecret() << std::endl;
        return 0;
    }

void PhoneBook::add()
{
    static int i = 0;
    std::string input;
    Contact user;
    std::cout << "Your name" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, input);
    user.set_name(input);
    std::cout << "Your surename" << std::endl;
    std::getline(std::cin, input);
    user.set_lastname(input);
    std::cout << "Your nickname" << std::endl;
    std::getline(std::cin, input);
    user.set_nickname(input);
    std::cout << "Your phone number" << std::endl;
    std::getline(std::cin, input);
    user.set_phone(input);
    std::cout << "Your darkest secret..." << std::endl;
    std::getline(std::cin, input);
    user.set_secret(input);
    this->book[i] = user;
    if(index < 8)
        this->index++;
    i++;
    if(i == 8)
        i = 0;
}

Contact PhoneBook::get_contact(int i)
{
    return(book[i]); 
}
