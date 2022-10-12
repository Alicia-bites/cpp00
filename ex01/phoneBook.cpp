/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 16:57:46 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(){
	_nextPos = 0;
}

// constructor
// PhoneBook::PhoneBook(Contact Contacts, int nextPos){
// 	_nextPos = nextPos;
// 	_cntacts = Contact[8];
// }

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

void	PhoneBook::add_contact(Contact c) {
	_contacts[_nextPos] = c;
	_nextPos = (_nextPos + 1) % 8;
}

//display searched contact
int PhoneBook::search_contact(std::string lostName)
{
	for (int i = 0; i < 8; i++)
		std::cout << i << _contacts[i]._firstName
			<< _contacts[i]._lastName << _contacts[i]._nickName << std::endl;
	while ()
	return (0);
}

int PhoneBook::exit()
{
	return (0);
}