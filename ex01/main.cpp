/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:16 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 15:38:36 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string command;
	
	std::cout << "Enter command : " << std::endl;
	std::cin >> command;
	
	if (command == "ADD")
		pb.add_contact();
	else if (command == "SEARCH")
		pb.search_contact();
	else if (command == "EXIT")
		return (0);
	else 
		std::cout << "I do not know this command. Please try again" << std::endl;
	return (0);
	
}