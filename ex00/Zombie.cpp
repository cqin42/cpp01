/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:43:13 by christine         #+#    #+#             */
/*   Updated: 2023/11/12 13:46:52 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->_name = str;
}

Zombie::~Zombie()
{
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
};
