/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:08:17 by christine         #+#    #+#             */
/*   Updated: 2023/11/12 13:50:28 by cqin             ###   ########.fr       */
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
	this->_name = str;
}

void Zombie::announce(void) const
{

	std::cout << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
};
