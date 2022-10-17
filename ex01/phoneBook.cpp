/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 14:11:08 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook()
: nextPos_(0)
, nReset_(0)
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

void	PhoneBook::display_contact_added_message() const
{
	if (nextPos_ != 0)
	std::cout << DEEPPINK3 << "Contact registered. " << 8 - nextPos_
		<< " entries left!" << RESET << std::endl;
	else if (nReset_ > 0 && nextPos_ == 0)
		std::cout << DEEPPINK3
			<< "0 entries left. Next time you add contact, we'll delete oldest contact added."
			<< RESET << std::endl;	
}
void	PhoneBook::add_contact(const Contact& c)
{
	contacts_[nextPos_] = c;
	nextPos_ = (nextPos_ + 1) % 8;
	if (nextPos_ == 0)
		nReset_++;
}

void	PhoneBook::display_contact_list() const
{
	if (nReset_ == 0 && nextPos_ == 0)
		std::cout << MAGENTA2 << "PhoneBook is empty." << RESET
			<< std::endl;
	if (nReset_ == 0)
	{
		for (int i = 0; i < nextPos_; i++)
		{
			contacts_[i].display_contact_line(i);
		}
	}
	else if (nReset_ > 0)
	{
		for (int i = 0; i < 8; i++)
		{
			contacts_[i].display_contact_line(i);
		}
	}
}

int		PhoneBook::parse_search() const
{
	if (nReset_ == 0 && nextPos_ == 0)
		return (-1);
	std::string index;
	std::cout << DEEPPINK3 << "Please enter contact index :" << RESET << std::endl;
	std::getline(std::cin, index);
	if(!std::cin)
	{
		std::cout << "failure\n";
	}
	while (!is_number(index))
	{
		std::cout << DEEPPINK3 << "Index not found. Index must be between 0 and 7 included."
			<< std::endl << "Please enter contact index again :" << RESET << std::endl;
		std::getline(std::cin, index);
		exit_if_EOF_detected();
	}
	int index_int = std::atoi(index.c_str());
	if (index_int > nextPos_ && nReset_ == 0)
	{
		std::cout << DEEPPINK3 << "No contact found!" << RESET << std::endl;
		return (-1);
	}
	while (index_int < 0 || index_int > 7)
	{
		std::cout << DEEPPINK3 << "Index not found. Index must be between 0 and 7 included."
			<< RESET << std::endl << "Please enter contact index again :";
		std::getline(std::cin, index);
		exit_if_EOF_detected();
		index_int = std::atoi(index.c_str());
	}
	return (index_int);
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
