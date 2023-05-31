/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:21:58 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 00:27:30 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_INDEX 8
# include "Contact.hpp"
#include <iomanip>
# include <iostream>

class PhoneBook{
    private:
        Contact book[8];
    public:
        PhoneBook();
        ~PhoneBook();
        int index;
        void add();
        int search(int indexing);
        void display_contacts();
        Contact get_contact(int i);
};

# endif