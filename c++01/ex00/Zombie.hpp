/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 01:29:53 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/07 11:02:26 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
    private:
        std::string _name;
    public:
        void announce(void) const;
        Zombie();
        ~Zombie();
        void setName(std::string zombieName);
        void randomChump(std::string name);
        Zombie* newZombie(std::string name);
};