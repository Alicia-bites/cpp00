/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:31:27 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 14:16:08 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include "contact.hpp"

std::string	format_index(int index);
std::string format_string(std::string s);

class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(const PhoneBook& p);
		~PhoneBook();
		
		void 		parse_add(Contact& newContact);
		void		add_contact(Contact c);
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