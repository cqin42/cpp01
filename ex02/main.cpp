/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:25:25 by christine         #+#    #+#             */
/*   Updated: 2023/11/07 15:43:36 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "\33[1;4mL’adresse de la string en mémoire.\33[0m" << std::endl;
	std::cout << "•str: " << &str << std::endl;
	std::cout << "•stringPTR: " << stringPTR << std::endl;
	std::cout << "•stringREF: " << &stringREF << std::endl;

	std::cout << "\33[1;4mValeur de la string.\33[0m" << std::endl;
	std::cout << "•str: " << str << std::endl;
	std::cout << "•stringPTR: " << *stringPTR << std::endl;
	std::cout << "•stringREF: " << stringREF << std::endl;

}
