/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 16:43:02 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(){
	_nextPos = 0;
}

//copy constructor
PhoneBook::PhoneBook(const PhoneBook& other)
{
	_nextPos = other._nextPos;
	for (int i = 0; i < 8; i++) {
		_contacts[i] = other._contacts[i];
	}
}

//destructor
PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(const Contact& c)
{
	_contacts[_nextPos] = c;
	_nextPos = (_nextPos + 1) % 8;
}

void	PhoneBook::display_contact_list() const
{
	for (int i = 0; i < 8; i++)
	{
		_contacts[i].display_contact_line(i);
	}
}

int		PhoneBook::parse_search() const
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

void	PhoneBook::search_contact(int index) const
{
	_contacts[index].display_contact_info();	
}
