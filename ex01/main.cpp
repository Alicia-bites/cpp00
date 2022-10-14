/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:31:16 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 09:04:27 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string command;
	
	while (1)
	{
		std::cout << "Enter command : " << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			Contact newContact(std::cout, std::cin);
			pb.add_contact(newContact);
		}
		else if (command == "SEARCH")
		{
			int index;
			pb.display_contact_list();
			index = pb.parse_search();
			pb.search_contact(index);
		}
		else if (command == "EXIT")
			return (0);
		else 
			std::cout << "Unknown command. Please try again" << std::endl;
	}
	return (0);
}