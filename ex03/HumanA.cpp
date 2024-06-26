/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:07:45 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 12:04:25 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), weaponA(weapon) {
	std::cout << "Human was succesfully initialised with name \"" << name << "\" and weapon \""
			<< weaponA.getType() << "\" through the reference to a previously constructed object from the Weapon class\n\n";
}

HumanA::~HumanA(){
	std::cout << "Human destroyed\n";	
}

void  HumanA::attack() const{
	std::cout << this->m_name << " attacks with their " << this->weaponA.getType() << std::endl;
}
