/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:22:04 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 00:9:52 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    Contact input;
    PhoneBook book;
    int indexing;
    while(1)
    { 
    std::cout << "What you want to do now?\nEnter \"ADD\" \"SEARCH\" or \"EXIT\"" << std::endl;
    std::cin >> input.first_input;
    if(input.first_input.compare("ADD") == 0)
        book.add();
    if(input.first_input.compare("ADD") != 0 && input.first_input.compare("SEARCH") != 0 && input.first_input.compare("EXIT") != 0)
        std::cout << "wtf are you entering dude?" << std::endl;
    if(input.first_input.compare("SEARCH") == 0 && book.index == 0)
    {
        std::cout << "There are no contacts yet" <<std::endl;
        continue;
    }
    if(input.first_input.compare("SEARCH") == 0)
    {
        if(book.search(indexing) == 1)
            continue;
    }
    else if(input.first_input == "EXIT")
        input.exiting();
    }
    return(0);
}
