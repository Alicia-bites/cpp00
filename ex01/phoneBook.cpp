/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/16 17:29:55 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook()
: nextPos_(0)
{}

//copy constructor
PhoneBook::PhoneBook(const PhoneBook& other)
{
	nextPos_ = other.nextPos_;
	for (int i = 0; i < 8; i++)
	{
		contacts_[i] = other.contacts_[i];
	}
}

//destructor
PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(const Contact& c)
{
	contacts_[nextPos_] = c;
	nextPos_ = (nextPos_ + 1) % 8;
}

void	PhoneBook::display_contact_list() const
{
	// if (nextPos_ == 0)
	// 	std::cout << MAGENTA2 << "PhoneBook is empty." << RESET
	// 		<< std::endl;
	for (int i = 0; i < 8; i++)
	{
		contacts_[i].display_contact_line(i);
	}
}

int		PhoneBook::parse_search() const
{
	int index;
	
	if (nextPos_ == 0)
		return (-1);
	std::cout << DEEPPINK3 << "Please enter contact index :" << std::endl;
	std::cin >> index;
	std::cout << "index = " << index << std::endl;
	while (index < 0 || index > 7)
	{
		std::cout << "Index not found. Index must be between 0 and 7 included."
			<< std::endl << "Please enter contact index again :";
		std::cin >> index;
	}
	return (index);
}

void	PhoneBook::search_contact(int index) const
{
	if (index == -1)
		return ;
	contacts_[index].display_contact_info();	
}

int		PhoneBook::get_next_pos() const
{
	return nextPos_;
}
