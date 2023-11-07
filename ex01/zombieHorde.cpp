/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:09:22 by christine         #+#    #+#             */
/*   Updated: 2023/11/07 14:42:47 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie_horde = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		zombie_horde[i].setZombieName(name);
	}
	return (zombie_horde);
}
