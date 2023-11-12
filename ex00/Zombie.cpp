/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:43:13 by christine         #+#    #+#             */
/*   Updated: 2023/11/12 16:39:29 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->_name = str;
}

Zombie::~Zombie()
{
	std::cout << "Goodbye !" << this->_name << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
};
