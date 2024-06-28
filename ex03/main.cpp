/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:10:06 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 15:03:22 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// ####### Weapon as a Pointer - Human B ########
//	--> Allows for the object of the Human class to not have a weapon --> through NUll pointer
//	--> Can point to other Weapon objects besides the club created

// ####### Weapon as a Reference - Human A ########
//	--> Weapon must be initialized and cannot be NULL
//	--> Can be altered through updated to the referenced object, but cannot change the object
// 		to another object

int main()
{ 
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{ 
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
