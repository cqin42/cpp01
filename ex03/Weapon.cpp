/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:23:08 by cqin              #+#    #+#             */
/*   Updated: 2023/11/10 19:19:42 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string w)
{
	setType(w);
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}
