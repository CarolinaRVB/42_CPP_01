/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 08:49:13 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 11:16:09 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA 
{
	public:
		HumanA(std::string name,  Weapon &weapon);
		~HumanA();
	
		void	attack() const;

	private:
		std::string	m_name;
		Weapon	&weaponA;
	
};

#endif