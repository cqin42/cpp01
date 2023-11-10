/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:10:13 by cqin              #+#    #+#             */
/*   Updated: 2023/11/10 19:18:58 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : _weapn(weapon)
{
	this->_name = str;
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << _weapn.getType() << std::endl;
}
