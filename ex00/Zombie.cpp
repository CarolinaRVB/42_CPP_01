/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:53:59 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/25 10:54:24 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
	announce();
}

Zombie::~Zombie(){
	std::cout << RED << "The zombie " << this->name << " has been destroyed" << RESET << std::endl;
}

void    Zombie::announce(void){
	std::cout << CYAN << this->name << ": " << "BraiiiiiiinnnzzzZ...\n" << RESET;
}
