/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:54 by cqin              #+#    #+#             */
/*   Updated: 2023/11/10 19:18:41 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &_weapn;
	std::string _name;

public:
	HumanA(std::string str, Weapon &weapon);
	~HumanA();
	void attack() const;
};
