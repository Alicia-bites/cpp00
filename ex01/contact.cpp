/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:56 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/16 17:28:01 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// Default Constructor
Contact::Contact()
: firstName_("default") // <-- ca appelle le copy-constructor de string
, lastName_("default")
, nickName_("default")
, phoneNumber_("default")
, darkestSecret_("default")
{}

// Constructor
Contact::Contact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
: firstName_(firstName)
, lastName_(lastName) 
, nickName_(nickName)
, phoneNumber_(phoneNumber) 
, darkestSecret_(darkestSecret)
{}

//another constructor
Contact::Contact(std::ostream &out, std::istream &in)
{
	out << MEDIUMPURPLE << "Please enter first name :" RESET << std::endl;
	in >> firstName_;
	out << MEDIUMPURPLE1 << "Please enter last name :" RESET << std::endl;
	in >> lastName_;
	out << MEDIUMPURPLE2 << "Please enter nickname :" RESET << std::endl;
	in >> nickName_;
	out << MEDIUMPURPLE3 << "Please enter phone number :" RESET << std::endl;
	in >> phoneNumber_;
	out << MEDIUMPURPLE5 << "Please enter darkest secret :" RESET
		<< std::endl;
	in >> darkestSecret_;
}

// Copy constructor
Contact::Contact(const Contact& other)
: firstName_(other.firstName_)
, lastName_(other.lastName_)
, nickName_(other.nickName_)
, phoneNumber_(other.phoneNumber_)
, darkestSecret_(other.darkestSecret_)
{}

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
		std::cerr << ORANGERED1 << "Error! Not a valid index." << RESET
			<< std::endl;
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
	if (n > 10)
		s.resize(10);
	while ((10 - n++) > 0)
		spaces_before += one_space;
	s = spaces_before + s;
	return s;
}

 void	Contact::display_contact_line(int i) const
{
	std::cout << SPRINGGREEN1
		<< format_index(i)
		<< RESET
		<< SLATEBLUE1
		<< "|" 
		<< RESET
		<< SPRINGGREEN2
		<< format_string(firstName_)
		<< RESET
		<< SLATEBLUE1
		<< "|"
		<< RESET
		<< SPRINGGREEN3
		<< format_string(lastName_)
		<< RESET
		<< SLATEBLUE1
		<< "|"
		<< RESET
		<< SPRINGGREEN4
		<< format_string(nickName_)
		<< RESET
		<< std::endl; 
}

void	Contact::display_contact_info() const
{	
	std::cout << DEEPSKYBLUE1 << firstName_ << RESET << std::endl;
	std::cout << DEEPSKYBLUE2 << lastName_ << RESET << std::endl;
	std::cout << DEEPSKYBLUE3 << nickName_ << RESET << std::endl;
	std::cout << DEEPSKYBLUE4 << phoneNumber_ << RESET << std::endl;
	std::cout << DEEPSKYBLUE5 << darkestSecret_ << RESET << std::endl;
}

