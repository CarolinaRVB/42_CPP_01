/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:53:59 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/24 23:19:06 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string) : name(NULL) {
}

Zombie::~Zombie(){
	std::cout << "The zombie " << name << "has been destroyed" << std::endl;
}

void    Zombie::announce(void){
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n"
}