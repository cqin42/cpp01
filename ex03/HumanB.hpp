/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:56:30 by cqin              #+#    #+#             */
/*   Updated: 2023/11/10 19:16:32 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapn;
	std::string _name;

public:
	HumanB(std::string str);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &w);
};
