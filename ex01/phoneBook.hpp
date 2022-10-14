/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:31:27 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 09:07:59 by amarchan         ###   ########.fr       */
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
		Contact(std::ostream& out, std::istream& in);
		Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret);
		Contact(const Contact& c);
		~Contact();

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();

	private:
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
		
		void 		parse_add(Contact& newContact);
		void		add_contact(Contact c);
		int			format_index(int index);
		std::string	format_string(std::string string);
		void		display_contact_list();
		int			parse_search();
		void		search_contact(int index);
		void		display_contact_info(Contact c);
		int			exit();
	
	private:
		Contact	_contacts[8];
		int 	_nextPos;
};

#endif