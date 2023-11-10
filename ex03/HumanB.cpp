/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:01:19 by cqin              #+#    #+#             */
/*   Updated: 2023/11/10 19:18:20 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->_name = str;
	this->_weapn = NULL;
}

HumanB::~HumanB()
{
}
void HumanB::attack() const
{
	if (this->_weapn == NULL)
	{
		std::cout << this->_name << " cannot attack. There is no any weapon" << std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << _weapn->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &w)
{
	this->_weapn = &w;
}
