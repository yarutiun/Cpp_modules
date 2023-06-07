/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:05:32 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/06 16:40:31 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl {
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
        void filter(std::string level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};