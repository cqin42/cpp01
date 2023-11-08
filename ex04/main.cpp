/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:34:55 by cqin              #+#    #+#             */
/*   Updated: 2023/11/08 19:33:53 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::fstream my_file;
	if (argc != 4)
	{
		std::cout << "Error -> Number of arguments is not 3" << std::endl;
		std::cout << "• argv[1] = name of file" << std::endl;
		std::cout << "• argv[2] = string 1" << std::endl;
		std::cout << "• argv[2] = string 2" << std::endl;

		return (1);
	}

	my_file.open(argv[1], std::ios::in);
	if (!my_file)
	{
		std::cout << argv[1] << " No such a file";
		return (1);
	}
	std::string filename = argv[1];
	filename = filename + ".replace";
	std::fstream my_file_replace;
	my_file_replace.open(filename.c_str(), std::ios::out);

	std::string str;
	std::string occurence = argv[2];
	std::string replace = argv[3];
	while (1)
	{
		my_file >> str;
		if (my_file.eof())
			break;
		size_t pos = 0;
		pos = str.find(argv[2], pos);
		if (pos == std::string::npos)
			my_file_replace << str;
		else
		{
			std::cout << pos << std::endl;
			std::cout << occurence.length() << std::endl;
			str.erase(pos, occurence.length());
			// str.insert(pos, replace);
			my_file_replace << str;
		}
	}
	my_file.close();
	my_file_replace.close();
}
