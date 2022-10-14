/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 14:09:47 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(){
	_nextPos = 0;
}

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

void	PhoneBook::add_contact(Contact c)
{
	_contacts[_nextPos] = c;
	_nextPos = (_nextPos + 1) % 8;
}

std::string	format_index(int index)
{
	int n = 0;
	
	std::stringstream ss;
	ss << index;
	std::string index_string = ss.str();
	std::string spaces_before = ""; //0 space
	std::string one_space = " "; //1 space
	if (index < 0)
		std::cerr << "Error! Not a valid index." << std::endl;
	else if (index == 0)
		n = 1;
	else
	{
		while (index > 0)
		{
			index /= 10;
			n++;
		}
	}
	while ((10 - n) > 0)
	{
		spaces_before += one_space;
		n++;		
	}
	index_string = spaces_before + index_string;
	return index_string;
}

std::string format_string(std::string s)
{
	std::string spaces_before = "";
	std::string one_space = " ";
	int n = s.length();
	while ((10 - n++) > 0)
		spaces_before += one_space;
	s = spaces_before + s;
	return s;
}

void	PhoneBook::display_contact_list()
{
	std::string	index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	for (int i = 0; i < 8; i++)
	{
		index = format_index(i);
		firstName = format_string(_contacts[i].getFirstName());
		lastName = format_string(_contacts[i].getLastName());
		nickName = format_string(_contacts[i].getNickName());
		std::cout << index << firstName
			<< lastName << nickName << std::endl;
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