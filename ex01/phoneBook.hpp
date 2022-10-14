/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:31:27 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/14 16:40:46 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include "contact.hpp"



class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(const PhoneBook& p);
		~PhoneBook();
		
		void		add_contact(const Contact& c);
		void		display_contact_list() const;
		int			parse_search() const;
		void		search_contact(int index) const;
	
	private:
		Contact	_contacts[8];
		int 	_nextPos;
};

#endif