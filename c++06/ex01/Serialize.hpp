/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:14:50 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/17 17:21:37 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Data{
    public:
        Data();
        ~Data();
        Data(const Data &d);
        Data &operator=(const Data &d);
        int i;
        int j;
};