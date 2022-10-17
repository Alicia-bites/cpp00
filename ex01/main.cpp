/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:16 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 13:56:24 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string command;
	
	while (1)
	{
		std::cout << DEEPPINK3 << "Enter command : " << RESET << std::endl;
		std::getline(std::cin, command);
		exit_if_EOF_detected();
		if (command == "ADD")
		{
			Contact newContact(std::cout, std::cin);
			pb.add_contact(newContact);
			pb.display_contact_added_message();
		}
		else if (command == "SEARCH")
		{
			char index;
			pb.display_contact_list();
			index = pb.parse_search();
			pb.search_contact(index);
		}
		else if (command == "EXIT")
			return (0);
	}
	return (0);
}