/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:01:58 by christine         #+#    #+#             */
/*   Updated: 2023/11/07 15:06:42 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setZombieName(std::string str);
		void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif
