/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:31:27 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 13:56:09 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>       // std::string
#include <cstdlib>
#include <cctype>
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include "contact.hpp"
#include "colors.hpp"

bool 	is_number(const std::string& s);
void	exit_if_EOF_detected();

class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(const PhoneBook& p);
		~PhoneBook();
		
		void		add_contact(const Contact& c);
		void		display_contact_added_message() const;
		void		display_contact_list() const;
		int			parse_search() const;
		void		search_contact(int index) const;
		int			get_next_pos() const; 
	private:
		Contact	contacts_[8];
		int 	nextPos_;
		int		nReset_;
};

#endif