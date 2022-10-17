/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_empty_field.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:29:01 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 14:35:01 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void handle_empty_field(std::string s)
{
	while (s.empty())
	{
		std::cout << TURQUOISE2 << "Field cannot be empty. Please try again : " 
			<< RESET << std::endl;
		std::getline(std::cin, s);
		exit_if_EOF_detected();
	}
}