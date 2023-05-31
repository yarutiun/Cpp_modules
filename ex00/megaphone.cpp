/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exoo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:03:09 by yarutiun          #+#    #+#             */
/*   Updated: 2023/04/13 16:03:21 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
    int i, j = 0;
    i = 1;
    if(argc != 1)
    {
        while(argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            std::cout << ' ';
            i++;
        }
        std::cout << std::endl; 
        return(0);
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(0);
}