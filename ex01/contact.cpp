/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:56 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 16:41:56 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// Default Constructor
Contact::Contact()
: _firstName("default") // <-- ca appelle le copy-constructor de string
, _lastName("default")
, _nickName("default")
, _phoneNumber("default")
, _darkestSecret("default")
{}

// Constructor
Contact::Contact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	_firstName = firstName;
	_lastName = lastName; 
	_nickName = nickName;
	_phoneNumber = phoneNumber; 
	_darkestSecret = darkestSecret;
}

//another constructor
Contact::Contact(std::ostream &out, std::istream &in)
{
	out << "Please enter first name :" << std::endl;
	in >> _firstName;
	out << "Please enter last name :" << std::endl;
	in >> _lastName;
	out << "Please enter nickname :" << std::endl;
	in >> _nickName;
	out << "Please enter phone number :" << std::endl;
	in >> _phoneNumber;
	out << "Please enter darkest secret :" << std::endl;
	in >> _darkestSecret;
}

// Copy constructor
Contact::Contact(const Contact& other)
{
	_firstName = other._firstName;
	_lastName = other._lastName;
	_nickName = other._nickName;
	_phoneNumber = other._phoneNumber; 
	_darkestSecret = other._darkestSecret;
}

// Destructor
Contact::~Contact()
{}

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

 void	Contact::display_contact_line(int i) const
{
	std::cout << format_index(i) << format_string(_firstName)
		<< format_string(_lastName) << format_string(_nickName) << std::endl; 
}

void	Contact::display_contact_info() const
{	
	std::cout << _firstName << std::endl;
	std::cout << _lastName << std::endl;
	std::cout << _nickName << std::endl;
	std::cout << _phoneNumber << std::endl;
	std::cout << _darkestSecret << std::endl;
}

