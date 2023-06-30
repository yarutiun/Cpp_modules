/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:38:42 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 14:13:36 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#define COUT std::cout
#define ENDL std::endl

#include <iostream>
// #include "Dog.hpp"
// #include "Cat.hpp"

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &obj);
        Animal &operator=(const Animal &obj); 
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
};

#endif