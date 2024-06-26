/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:57:36 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 12:07:39 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

// const before:
// The returned reference is to a const std::string, meaning the
//  caller cannot modify the string via the reference.

// const after:
// The member function itself does not modify the object's state, 
// allowing it to be called on const objects.

class Weapon
{
	public:
		Weapon(std::string weapon);
		~Weapon();

		const std::string& getType() const;
		void	setType(const std::string type);

	private:
		std::string m_type;
};


#endif