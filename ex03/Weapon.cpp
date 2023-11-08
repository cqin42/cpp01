/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:23:08 by cqin              #+#    #+#             */
/*   Updated: 2023/11/08 16:39:31 by cqin             ###   ########.fr       */
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
	return (this->type);
}

void Weapon::setType(std::string str)
{
	this->type = str;
}
