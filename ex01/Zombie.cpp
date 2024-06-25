/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:56:42 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/25 16:24:02 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << "The Zombie " << this->m_name << " has been destroyed\n";
}

void	Zombie::announce(){
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name){
	this->m_name = name;
}
