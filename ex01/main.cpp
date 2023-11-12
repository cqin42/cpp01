/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:42:54 by christine         #+#    #+#             */
/*   Updated: 2023/11/12 13:51:12 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde_zombie;
	std::string str;
	std::cout << "\33[35mNUMBER OF ZOMBIE: ";
	getline(std::cin, str);
	std::cout << "\33[0m";
	int nb = atoi(str.c_str());

	std::cout << "\33[35mNAME OF YOURS ZOMBIES: ";
	getline(std::cin, str);
	std::cout << "\33[0m";

	horde_zombie = zombieHorde(nb, str);
	for (int i = 0; i < nb; i++)
	{
		std::cout << "index: " << i << " -> ";
		horde_zombie[i].announce();
	}
	delete[] horde_zombie;
}
