/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:14:52 by cqin              #+#    #+#             */
/*   Updated: 2023/11/09 17:13:59 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}
{
	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();
}
{
	HumanB toto("toto");
	toto.attack();
}
}
