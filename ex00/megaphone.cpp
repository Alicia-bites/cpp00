/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:51:38 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/12 10:00:40 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {
	int	i;
	int	j;

	i = 1;
	if (!argc)
		return (0);
	while (argv[i])
	{
		for (int j = 0; j < strlen(argv[i]); j++)
			putchar(toupper(argv[j]);
		
	}
	return (0);
}