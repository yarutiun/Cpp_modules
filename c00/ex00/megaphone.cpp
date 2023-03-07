/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:15:23 by yarutiun          #+#    #+#             */
/*   Updated: 2023/03/07 21:33:50 by yarutiun         ###   ########.fr       */
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
                // if(!isspace(argv[i][j]))
                // {
                //     std::cout << ' ';
                //     j++;
                //     continue;
                // }
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