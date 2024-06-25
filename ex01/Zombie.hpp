/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:56:58 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/25 16:24:12 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void    announce(void);

	private:
		std::string m_name;
};

Zombie* zombieHorde(int N, std::string name);

# endif