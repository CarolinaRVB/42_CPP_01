/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:56:24 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 15:01:10 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : m_type(weapon){
}

Weapon::~Weapon(){
	std::cout << "Weapon has been destroyed\n"; 
}

const std::string& Weapon::getType() const {
	return (this->m_type);
}

void Weapon::setType(const std::string type){
	this->m_type = type;
}
