/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:31:27 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/11 16:58:31 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>

class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(int id, int space_left);
		PhoneBook(const PhoneBook& p);
		~PhoneBook();
		
		int	add_contact();
		int search_contact();
		int	exit();
	
	private:
		int	_id;
		int	_space_left;
};

class Contact {
	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret);
		Contact(const Contact& c);
		~Contact();

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumberName();
		std::string getDarkestSecret();

	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif