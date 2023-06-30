/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:07:35 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 13:46:57 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *arr[2];
    arr[0] = new Cat();
    arr[1] = new Dog();
    
    delete arr[0];
    delete arr[1];
    // const Animal* meta = new Animal();
    // const Animal* dog = new Dog();
    // const Animal* cat = new Cat();

    // std::cout << dog->getType() << " " << std::endl;
    // std::cout << cat->getType() << " " << std::endl;

    // dog->makeSound();
    // cat->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete cat;
    // delete dog;

    // const WrongAnimal *wmeta = new WrongAnimal();
	// const WrongAnimal *wi = new WrongCat();

	// std::cout << wi->getType() << std::endl;
	// wmeta->makeSound();
	// wi->makeSound();

	// delete wmeta;
	// delete wi;

    

    return 0;
}
