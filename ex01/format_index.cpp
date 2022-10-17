/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_index.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:29:58 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 14:45:19 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

std::string	format_index(int index)
{
	int n = 0;
	
	if (index < 0)
		std::cerr << ORANGERED1 << "Error! Not a valid index." << RESET
			<< std::endl;
	std::stringstream ss;
	ss << index;
	std::string index_string = ss.str();
	if (index_string.length() > 10)
	{
		index_string.resize(9);
		index_string += ".";
		return index_string;	
	}
	std::string spaces_before = ""; //0 space
	std::string one_space = " "; //1 space
	if (index == 0)
		n = 1;
	else
	{
		while (index > 0)
		{
			index /= 10;
			n++;
		}
	}
	while ((9 - n) > 0)
	{
		spaces_before += one_space;
		n++;		
	}
	index_string = spaces_before + index_string;
	return index_string;
}
