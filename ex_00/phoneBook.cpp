/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:05:21 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/11 16:55:12 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(){
	_id = 0;
	_space_left = 9;
}

// constructor
PhoneBook::PhoneBook(int id, int space_left){
	_id = id;
	_space_left = space_left;
}

//copy constructor
PhoneBook::PhoneBook(const PhoneBook& other){
	_id = other._id;
	_space_left = other._id;
}

//destructor
PhoneBook::~PhoneBook(){
	
}



