/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:15:47 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 14:34:55 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
	
		void	attack() const;
		void	setWeapon(Weapon &weapon);
		
	private:
		std::string	m_name;
		Weapon* weapon; 
};



#endif