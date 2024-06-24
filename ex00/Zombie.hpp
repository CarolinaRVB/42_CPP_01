/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:53:52 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/24 23:16:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class   Zombie{
    
    public:
       
        Zombie(std::string input);
        ~Zombie();
       
        void            randomChump(std::string name);
        Zombie          *newZombie(std::string name);
    
    private:
        std::string     name;
        void            announce(void);
};

#endif
