/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 08:54:09 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/25 10:54:33 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	std::cout << GREEN << "Creating Zombies through STACK allocation\n" << RESET;
	randomChump("stackZombie");
	
	std::cout << GREEN << "\nCreating Zombies through HEAP allocation\n" << RESET;
	
	Zombie*	zombie = newZombie("heapZombie");
	delete zombie;
	return (0);  
}
