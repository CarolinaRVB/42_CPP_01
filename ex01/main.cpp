/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:57:08 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/25 16:38:35 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	
	int N = 5;
	if (N <= 0){
		std::cout << "tests with invalid N\n";
		return (1);
	}

	// creates an array of objects from the zombie class, with size 5 and 
	// names them dummy;
	Zombie* zombies = zombieHorde(N, "dummy");
	
	
	// announces each of the zombies created: should be N times;
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	
	// since it's an array of objects, the operator delete has to be called with []
	delete[] zombies;

	return (0);
}