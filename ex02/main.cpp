/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:43:49 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/25 19:41:37 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;
	
	std::cout << "Memory address of var is: " << &var << "\n";
	std::cout << "Memory address of stringPTR is: " << stringPTR << "\n";
	std::cout << "Memory address of stringREF is: " << &stringREF << "\n\n";
	
	std::cout << "Value of string is: " << var << "\n";
	std::cout << "Value of pointer is: " << *stringPTR << "\n";
	std::cout << "Value of ref is: " << stringREF << "\n";
	
	return (0);
}