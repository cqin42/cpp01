/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:01:19 by cqin              #+#    #+#             */
/*   Updated: 2023/11/08 17:19:43 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->weapn = NULL;
}

HumanB::~HumanB()
{
}
void HumanB::attack() const
{
	std::cout << this->name << " attacks with their ";
	if (this->weapn != NULL)
		std::cout << weapn->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	this->weapn = &w;
}
