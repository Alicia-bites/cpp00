/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:56 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 13:23:45 by amarchan         ###   ########.fr       */
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

std::string Contact::getFirstName() {
	std::string firstName;
	std::cin >> firstName;
	_firstName = firstName;
	return _firstName;
}

