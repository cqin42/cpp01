/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:34:55 by cqin              #+#    #+#             */
/*   Updated: 2023/11/13 16:00:22 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int parse(int argc)
{
	if (argc != 4)
	{
		std::cout << "Error -> Number of arguments is not 3" << std::endl;
		std::cout << "• argv[1] = name of file" << std::endl;
		std::cout << "• argv[2] = string 1" << std::endl;
		std::cout << "• argv[2] = string 2" << std::endl;

		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (parse(argc) == 1)
		return (1);

	std::fstream my_file;
	my_file.open(argv[1], std::ios::in);
	if (!my_file)
	{
		std::cout << argv[1] << " Cannot open file or not exist" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	filename = filename + ".replace";
	std::fstream my_file_replace;
	my_file_replace.open(filename.c_str(), std::ios::out);

	std::string occurence = argv[2];
	std::string replace = argv[3];

	size_t pos = 0;
	std::string str;
	while (getline(my_file, str))
	{
		pos = 0;
		std::cout << "1 " << str << std::endl;
		pos = str.find(occurence, pos);
		if (pos == std::string::npos)
			my_file_replace << str;
		else
		{
			std::string str2 = str;
			while (pos != std::string::npos)
			{
				str.erase(pos, occurence.length());
				str.insert(pos, replace);
				pos = str.find(occurence, pos + replace.length());
			}
			my_file_replace << str;
		}
		my_file_replace << "\n";
	}

	my_file.close();
	my_file_replace.close();
}
