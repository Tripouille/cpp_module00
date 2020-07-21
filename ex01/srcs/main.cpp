/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:12:49 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:57:22 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int		main(void)
{
	std::string		command;
	Phonebook		phonebook;

	do
	{
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			phonebook.add();
		else if (!command.compare("SEARCH"))
			phonebook.search();
	} while (command.compare("EXIT"));
	return(0);
}
