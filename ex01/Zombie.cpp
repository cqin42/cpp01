/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:08:17 by christine         #+#    #+#             */
/*   Updated: 2023/11/07 14:41:54 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}
void Zombie::setZombieName(std::string str)
{
	this->name = str;
}

void Zombie::announce(void) const
{
	if (name == "Foo")
		std::cout << "Foo: ";
	else
		std::cout << "<" << this->name << ">: ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;

};
