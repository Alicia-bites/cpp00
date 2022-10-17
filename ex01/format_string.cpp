/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:29:35 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 14:46:10 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

std::string format_string(std::string s)
{
	std::string spaces_before = "";
	std::string one_space = " ";
	int n = s.length();
	if (n > 10)
	{
		s.resize(9);
		s += ".";
		return s;		
	}
	while ((10 - n) > 0)
	{
		spaces_before += one_space;
		n++;		
	}
	s = spaces_before + s;
	return s;
}