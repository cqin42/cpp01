/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:38:54 by christine         #+#    #+#             */
/*   Updated: 2023/11/12 13:45:46 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string str);
	~Zombie();
	void announce(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
