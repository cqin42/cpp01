/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:43:13 by christine         #+#    #+#             */
/*   Updated: 2023/11/07 13:33:54 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->name = str;
}

Zombie::~Zombie()
{
}


void Zombie::announce(void) const
{
	if (name == "Foo")
		std::cout << "Foo: ";
	else
		std::cout << "<" << this->name << ">: ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;

};
