/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:39:51 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:57:10 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->infos[0].set_info(0, "first name", "","alpha");
	this->infos[1].set_info(1, "last name", "", "alpha");
	this->infos[2].set_info(2, "nickname", "", "alnum");
	this->infos[3].set_info(3, "login", "", "alnum");
	this->infos[4].set_info(4, "postal address", "", "address");
	this->infos[5].set_info(5, "email address", "", "mail");
	this->infos[6].set_info(6, "phone number", "", "phone");
	this->infos[7].set_info(7, "birthday date", "", "date");
	this->infos[8].set_info(8, "favorite meal", "", "sentence");
	this->infos[9].set_info(9, "underwear color", "", "alpha");
	this->infos[10].set_info(10, "darkest secret", "", "sentence");
}

std::string		Contact::get_info_value(std::string name)
{
	int		i;

	i = 0;
	while (i < MAX_INFO && this->infos[i].get_name().compare(name))
		i++;
	return (infos[i].get_value());
}

std::string		Contact::get_info_value(int id)
{
	int		i;

	i = 0;
	while (i < MAX_INFO && this->infos[i].get_id() != id)
		i++;
	return (infos[i].get_value());
}

std::string		Contact::get_info_format(int id)
{
	int		i;

	i = 0;
	while (i < MAX_INFO && this->infos[i].get_id() != id)
		i++;
	return (infos[i].get_format());
}

std::string		Contact::get_info_name(int id)
{
	int		i;

	i = 0;
	while (i < MAX_INFO && this->infos[i].get_id() != id)
		i++;
	return (infos[i].get_name());
}

void			Contact::set_info(int id, std::string value)
{
	int		i;

	i = 0;
	while (i < MAX_INFO && this->infos[i].get_id() != id)
		i++;
	if (i < MAX_INFO)
		this->infos[i].set_value(value);
}
