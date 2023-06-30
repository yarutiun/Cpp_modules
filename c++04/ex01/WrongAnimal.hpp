/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:40:50 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/26 15:46:36 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal &operator=(const WrongAnimal &obj); 
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif