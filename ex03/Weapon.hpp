/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:07:29 by cqin              #+#    #+#             */
/*   Updated: 2023/11/10 19:19:27 by christine        ###   ########.fr       */
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
