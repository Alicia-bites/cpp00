/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:15:28 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 18:46:56 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "contact.hpp"

std::string	format_index(int index);
std::string format_string(std::string s);

class Contact {
	public:
		Contact();
		Contact(std::ostream& out, std::istream& in);
		Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret);
		Contact(const Contact& c);
		~Contact();

		void	display_contact_line(int i) const;
		void	display_contact_info() const;

	private:
		std::string	firstName_;
		std::string	lastName_;
		std::string	nickName_;
		std::string	phoneNumber_;
		std::string	darkestSecret_;
};

#endif