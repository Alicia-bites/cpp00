/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:51:38 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 11:18:44 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <stdio.h>

// Static_cast is a safer cast than the implicit C style cast. If you try to
// cast an entity which is not compatible to another, then static_cast gives
// you an compilation time error unlike the implicit c-style cast.
int main(int argc, char *argv[]) {
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[i])
	{
		std::string s(argv[i]);
		for (size_t j = 0; j < strlen(argv[i]); j++)
			std::cout << static_cast<char>(std::toupper(s[j]));
		std::cout << std::endl;
		i++;
	}
	return (0);
}