/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:16 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 13:19:10 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook pb;
	static_cast<void>(argc);
	static_cast<void>(argv);
	std::string command;
	
	std::cout << "Enter command : ";
	std::cin >> command;
	
	if (strcmp(command.c_str(), "ADD"))
		pb.add_contact();
	// else if (strcmp(command.c_str(), "SEARCH"))
	// 	PhoneBook::search_contact();
	// else if (strcmp(command.c_str(), "EXIT"))
	// 	PhoneBook::exit();
	else 
		std::cout << "I do not know this command. Please try again" << std::endl;
	return (0);
}