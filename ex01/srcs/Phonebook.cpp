/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:59:56 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 09:47:15 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "check_info_format.hpp"

void		Phonebook::print_info(int slot, std::string name)
{
	std::string		info = this->contacts[slot].get_info_value(name);

	if (info.length() > 10)
		info = info.replace(9, 1, ".").substr(0, 10);
	std::cout << std::setfill (' ') << std::setw (10) << info;
}

void		Phonebook::print_all_infos(int slot)
{
	int		i;

	i = -1;
	while (++i < MAX_INFO)
	{
		std::cout << this->contacts[slot].get_info_name(i) << ": ";
		std::cout << this->contacts[slot].get_info_value(i) << "\n";
	}
}

int			Phonebook::info_is_valid(std::string format, std::string info)
{
	if (!info[0])
	{
		std::cout << "Error your input is empty.\n";
		return (0);
	}
	if (!format.compare("alpha") && !is_all_alpha(info))
		return (0);
	else if (!format.compare("sentence") && !is_sentence(info))
		return (0);
	else if (!format.compare("alnum") && !is_all_alnum(info))
		return (0);
	else if (!format.compare("address") && !is_address(info))
		return (0);
	else if (!format.compare("mail") && !is_mail(info))
		return (0);
	else if (!format.compare("phone") && !is_phone(info))
		return (0);
	else if (!format.compare("date") && !is_date(info))
		return (0);
	return (1);
}

Phonebook::Phonebook(void)
{
	this->used_slot = 0;
}

void		Phonebook::add(void)
{
	int				id;
	std::string		info;

	if (used_slot >= MAX_SLOT)
	{
		std::cout << "Error your phonebook is full.\n";
		return ;
	}
	id = -1;
	while (++id < MAX_INFO)
	{
		do
		{
			std::cout << this->contacts[used_slot].get_info_name(id) << ":\n";
			std::getline(std::cin, info);
		} while (!info_is_valid(this->contacts[used_slot].get_info_format(id), info));
		this->contacts[used_slot].set_info(id, info);
	}
	this->used_slot++;
	std::cout << "Contact successfully added [";
	std::cout << this->used_slot;
	std::cout << "/";
	std::cout << MAX_SLOT;
	std::cout << "].\n";
}

void		Phonebook::search(void)
{
	int				i;
	std::string		r;

	if (!this->used_slot)
	{
		std::cout << "Error your phonebook is empty.\n";
		return ;
	}
	i = -1;
	while (++i < this->used_slot)
	{
		std::cout << "         ";
		std::cout << i;
		std::cout << "|";
		this->print_info(i, "first name");
		std::cout << "|";
		this->print_info(i, "last name");
		std::cout << "|";
		this->print_info(i, "nickname");
		std::cout << "\n";
	}
	do
	{
		std::cout << "Please select a number between 0 and ";
		std::cout << (int)(this->used_slot - 1) << ".\n";
		std::getline(std::cin, r);
	} while (r.length() != 1 || r[0] - '0' >= this->used_slot || !isdigit(r[0]));
	print_all_infos(r[0] - '0');
}
