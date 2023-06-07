/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:24:04 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/01 00:09:49 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact{
    public:
        std::string first_input;
        Contact();
        ~Contact();
        void exiting(void);
        void set_name(std::string string);
        void set_lastname(std::string string);
        void set_nickname(std::string string);
        void set_phone(std::string string);
        void set_secret(std::string string);
        std::string getName(void);
        std::string getSurName(void);
        std::string getNickName(void);
        std::string getPhone(void);
        std::string getSecret(void);
        
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNum;
        std::string _secret;

};

# endif