/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:04:35 by christine         #+#    #+#             */
/*   Updated: 2023/11/10 14:04:40 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
