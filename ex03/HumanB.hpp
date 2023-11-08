/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:56:30 by cqin              #+#    #+#             */
/*   Updated: 2023/11/08 17:19:36 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapn;
	std::string name;

public:
	HumanB(std::string str);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &w);
};
