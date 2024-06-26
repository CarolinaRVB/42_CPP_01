/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:15:35 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 14:47:42 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name), weapon(NULL) {
	std::cout << "Human B was created\n";
}

HumanB::~HumanB(){
	std::cout << "Human B was destroyed\n";
}

void    HumanB::attack() const {
	if (!this->weapon)
		std::cout << this->m_name << " attacks with no weapon\n";
	else
		std::cout << this->m_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}