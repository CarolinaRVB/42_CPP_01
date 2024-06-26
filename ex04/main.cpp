/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:05:29 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/26 18:31:28 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

// ############ steps on exercise ################
// 1 - check arguments
// 2 - open and read the file
// 3 - search of arvg[2] in each read of the file
// 4 - if found replace with argv[3]
// 5 - If eof close file

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0]){
		std::cout << "Error: invalid arguments\n";
		return 1;
	}
	// opening the file:
	std::ifstream	inFile((std::string(argv[1]).c_str()));
	
	if (!inFile){
		std::cout << "Issue with opening the file\n";
		return 1;
	}
	
	// capture what's in the file through rdbuf stored in a stringstream var
	// convert the contents into a type string
	std::stringstream buffer;
	buffer << inFile.rdbuf();
	std::string contents = buffer.str();
	
	// search for arg string in contents of file and substitute it new string
	// concatenate results
	size_t index = 0;
	size_t pos = 0;
	std::string newString;
	while (index < contents.size()){
		pos = contents.find(argv[2], index);
		if (pos != std::string::npos){
			newString = newString + contents.substr(index, pos - index);
			newString = newString + std::string(argv[3]);
			index = pos + std::string(argv[2]).length();
		}
		else
			break ;
	}
	newString = newString + contents.substr(index, contents.size());
	
	// creates and defines the output to a file
	std::string outfile = std::string(argv[1]) + ".replace";
	std::ofstream	file(outfile.c_str());

	if (newString.empty()){
		std::cout << "empty\n";
		file << contents;
	}
	else
		file << newString;
	file.close();
}