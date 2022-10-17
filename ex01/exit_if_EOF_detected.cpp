/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_if_EOF_detected.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:53:15 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 13:55:18 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	exit_if_EOF_detected()
{
	if (!std::cin)
	{
		std::cout << "failure\n";
		exit(-1);
	}
}
