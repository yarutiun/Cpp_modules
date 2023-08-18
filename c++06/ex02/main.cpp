/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:18:23 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/18 13:40:46 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    std::cout << "Destructor called" << std::endl;
}

Base *generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if(i == 0)
    {
        std::cout << "A was instanciated" << std::endl;
        return(new A);
    }
    else if(i == 1)
    {
        std::cout << "B was instanciated" << std::endl;   
        return(new B);
    }
    else if(i == 2)
    {
        std::cout << "C was instanciated" << std::endl;
        return(new C);
    }
    return(NULL);
}

void	identify(Base* p) {

	if (dynamic_cast<A *>(p))
		std::cout << "Pointer is type A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer is type B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer is type C." << std::endl;
	else
		std::cout << "Cannot identify pointer type." << std::endl;

}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "Pointer is type A." << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "Pointer is type B." << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                std::cout << "Pointer is type C." << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "I have no Idea what is this shit" << std::endl;
            }
            
        }
           
    }
    
}

int main(void)
{
    // Base &xbase = generate();
    Base *base = generate();
    identify(base);
    identify(*base);
    return(0);
}