/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:56 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 09:07:22 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// Default Constructor
Contact::Contact() {
	_firstName = "default";
	_lastName = "default"; 
	_nickName = "default";
	_phoneNumber = "default"; 
	_darkestSecret = "default";
}

// Constructor
Contact::Contact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret){
	_firstName = firstName;
	_lastName = lastName; 
	_nickName = nickName;
	_phoneNumber = phoneNumber; 
	_darkestSecret = darkestSecret;
}

//another constructor
Contact::Contact(std::ostream &out, std::istream &in) {
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
Contact::Contact(const Contact& other) {
	_firstName = other._firstName;
	_lastName = other._lastName;
	_nickName = other._nickName;
	_phoneNumber = other._phoneNumber; 
	_darkestSecret = other._darkestSecret;
}

// Destructor
Contact::~Contact(){
}

//getters
std::string Contact::getFirstName() {
	return _firstName;
}

std::string Contact::getLastName() {
	return _lastName;
}
std::string Contact::getNickName() {
	return _nickName;
}
std::string Contact::getPhoneNumber() {
	return _phoneNumber;
}
std::string Contact::getDarkestSecret() {
	return _darkestSecret;
}
