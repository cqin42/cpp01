/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:01:35 by christine         #+#    #+#             */
/*   Updated: 2023/11/10 14:38:09 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for(i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			break;
		}
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
			std::cout << "\n";
        // intentional fall-through
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
			std::cout << "\n";
        // intentional fall-through
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			std::cout << "\n";
        // intentional fall-through
  		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
		break;

		default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger ! If you did, ";
	std::cout << "I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working ";
	std::cout << "here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

