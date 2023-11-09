/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:01:19 by cqin              #+#    #+#             */
/*   Updated: 2023/11/09 17:17:08 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
}

HumanB::~HumanB()
{
}
void HumanB::attack() const
{
	if (this->weapn)
	{
		std::cout << this->name << " attacks with their ";
		std::cout << weapn->getType() << std::endl;
	}
	else if (!this->weapn)
		std::cout << this->name << " cannot attack. There is no any weapon" << std::endl;

}

void HumanB::setWeapon(Weapon &w)
{
	this->weapn = &w;
}
