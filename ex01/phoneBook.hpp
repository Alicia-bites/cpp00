/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:31:27 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 16:57:08 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <stdio.h>

class Contact {
	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret);
		Contact(const Contact& c);
		~Contact();

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumberName();
		std::string	getDarkestSecret();

	// private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};
		
class PhoneBook {
	public:
		PhoneBook();
		// PhoneBook(Contact Contacts, int nextPos);
		PhoneBook(const PhoneBook& p);
		~PhoneBook();
		
		void	add_contact(Contact c);
		int		search_contact(std::string lostName);
		int		exit();
	
	private:
		Contact	_contacts[8];
		int 	_nextPos;
};

#endif