/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:10:13 by cqin              #+#    #+#             */
/*   Updated: 2023/11/08 16:24:39 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : weapn(weapon)
{
	this->name = str;
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their ";
	std::cout << weapn.getType() << std::endl;
}
