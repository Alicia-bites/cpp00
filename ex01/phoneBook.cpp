/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 09:13:23 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(){
	_nextPos = 0;
}

// constructor
// PhoneBook::PhoneBook(Contact Contacts, int nextPos){
// 	_nextPos = nextPos;
// 	_cntacts = Contact[8];
// }

//copy constructor
PhoneBook::PhoneBook(const PhoneBook& other){
	_nextPos = other._nextPos;
	for (int i = 0; i < 8; i++) {
		_contacts[i] = other._contacts[i];
	}
}

//destructor
PhoneBook::~PhoneBook(){
	
}

// void	PhoneBook::parse_add(Contact& newContact) {
// 	std::cout << "Please enter first name :" << std::endl;
// 	std::cin >> newContact._firstName;
// 	std::cout << "Please enter last name :" << std::endl;
// 	std::cin >> newContact._lastName;
// 	std::cout << "Please enter nickname :" << std::endl;
// 	std::cin >> newContact._nickName;
// 	std::cout << "Please enter phone number :" << std::endl;
// 	std::cin >> newContact._phoneNumber;
// 	std::cout << "Please enter darkest secret :" << std::endl;
// 	std::cin >> newContact._darkestSecret;
// }

void	PhoneBook::add_contact(Contact c)
{
	_contacts[_nextPos] = c;
	_nextPos = (_nextPos + 1) % 8;
}

// int	format_index(int index)
// {
// 	std::string index_string;
// 	if (index < 10)
// 		index_string = "         " + index;
// 		std::cout << 
// }

void	PhoneBook::display_contact_list()
{
	for (int i = 0; i < 8; i++)
	{
		// i = format_index(i);
		// _contacts[i]._firstName = format_string(_contacts[i]._firstName);
		// _contacts[i]._lastName = format_string(_contacts[i]._lastName);
		// _contacts[i]._nickName = format_string(_contacts[i]._nickName);
		std::cout << i << _contacts[i].getFirstName()
			<< _contacts[i].getLastName() << _contacts[i].getNickName() << std::endl;
	}
}

int		PhoneBook::parse_search()
{
	int index;
	
	std::cout << "Please enter contact index" << std::endl;
	std::cin >> index;
	while (index < 0 || index > 7)
	{
		std::cout << "Index not found. Index must be between 0 and 7 included."
			<< std::endl;
		std::cin >> index;
	}
	return (index);
}

void	PhoneBook::search_contact(int index)
{
	display_contact_info(_contacts[index]);	
}

void	PhoneBook::display_contact_info(Contact c)
{	
	std::cout << c.getFirstName() << std::endl;
	std::cout << c.getLastName() << std::endl;
	std::cout << c.getNickName() << std::endl;
	std::cout << c.getPhoneNumber() << std::endl;
	std::cout << c.getDarkestSecret() << std::endl;
}