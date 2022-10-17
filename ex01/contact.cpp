/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:56 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 14:32:10 by amarchan         ###   ########.fr       */
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
	std::getline(in, firstName_);
	exit_if_EOF_detected();
	handle_empty_field(firstName_);
	out << MEDIUMPURPLE1 << "Please enter last name :" RESET << std::endl;
	std::getline(in, lastName_);
	exit_if_EOF_detected();
	handle_empty_field(lastName_);
	out << MEDIUMPURPLE2 << "Please enter nickname :" RESET << std::endl;
	std::getline(in, nickName_);
	exit_if_EOF_detected();
	handle_empty_field(nickName_);
	out << MEDIUMPURPLE3 << "Please enter phone number :" RESET << std::endl;
	std::getline(in, phoneNumber_);
	exit_if_EOF_detected();
	handle_empty_field(phoneNumber_);
	out << MEDIUMPURPLE5 << "Please enter darkest secret :" RESET
		<< std::endl;
	std::getline(in, darkestSecret_);
	exit_if_EOF_detected();
	handle_empty_field(darkestSecret_);
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