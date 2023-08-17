/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 16:29:29 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/16 23:11:07 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER
#include <iostream>

class ScalarConversion
{
    public:
          ScalarConversion();
          ~ScalarConversion();
          ScalarConversion(const ScalarConversion &sc);
          ScalarConversion &operator=(const ScalarConversion &sc);
          void convert();
          void setInput(std::string str);
          std::string getInput(void);
    
    private:
        std::string _input;
};

#endif