/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:54 by cqin              #+#    #+#             */
/*   Updated: 2023/11/08 15:53:41 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapn;
	std::string name;

public:
	HumanA(std::string str, Weapon &weapon);
	~HumanA();
	void attack() const;
};
