/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:57:25 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/28 10:14:32 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	
	Harl    harl;

	if (argc != 2){
		std::cout << "Wrong arguments, this is Harl's response:\n";
		harl.complain("ERROR");
		return (1);
	}
	harl.complain(argv[1]);

	return (0);
}
