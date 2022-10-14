/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:15:28 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 14:15:47 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

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