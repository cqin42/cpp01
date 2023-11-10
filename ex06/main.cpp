/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:14:09 by christine         #+#    #+#             */
/*   Updated: 2023/11/10 14:19:23 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Number of arguments not valid" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	Harl harl;

	harl.complain(level);
	return (0);
}
