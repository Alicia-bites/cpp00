/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 13:42:36 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(){
	_nextPos = 0;
}

// constructor
PhoneBook::PhoneBook(Contact Contacts, int nextPos){
	_nextPos = nextPos;
	_Contacts = Contacts[8];
}

//copy constructor
PhoneBook::PhoneBook(const PhoneBook& other){
	_nextPos = other._nextPos;
	_Contacts = other._Contacts;
}

//destructor
PhoneBook::~PhoneBook(){
	
}

int	PhoneBook::add_contact() {
	static int i = 0;
	
	if (i < 9)
	{
		Contacts[i] = newContact;
		i++;
	}
	else
	{
		std::string answer;
		std::cout << "PhoneBook is full. Oldest contact will be deleted.";
		replace_contact(newContact);
		add_contact();
	}
	return (0);
}

int PhoneBook::delete_contact() {
	
}
