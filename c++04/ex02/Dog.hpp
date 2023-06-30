/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:18:31 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 13:37:20 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &obj);
        Dog &operator=(const Dog &obj);
        void makeSound() const;
    
    private:
       Brain *brain;
};

#endif