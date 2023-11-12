/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:07:29 by cqin              #+#    #+#             */
/*   Updated: 2023/11/12 13:56:09 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon
{
private:
	std::string _type;

public:
	Weapon(const std::string w);
	~Weapon();
	const std::string &getType();
	void setType(std::string str);
};

#endif
