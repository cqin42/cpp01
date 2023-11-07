/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:43:57 by christine         #+#    #+#             */
/*   Updated: 2023/11/07 13:53:46 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string str;
	std::cout << "\33[35mGIVE A NAME FOR YOUR FIRST ZOMBIE: ";
	getline(std::cin, str);
	std::cout << "\33[0m";
	randomChump(str);

	Zombie *zombie2;
	std::cout << "\33[35mGIVE A NAME FOR YOUR SECOND ZOMBIE: ";
	getline(std::cin, str);
	std::cout << "\33[0m";
	zombie2 = newZombie(str);
	zombie2->announce();
	delete zombie2;
}
