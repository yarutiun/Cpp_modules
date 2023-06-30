/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:10:04 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 13:46:42 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BRAIN_HPP
#define BRAIN_HPP


class Brain
{
    public:
        Brain();
        virtual ~Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
    private:
        std::string _ideas[100];
};

#endif