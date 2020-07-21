/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:10:11 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:57:17 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

int				Info::get_id(void)
{
	return (this->id);
}

std::string		Info::get_name(void)
{
	return (this->name);
}

std::string		Info::get_value(void)
{
	return (this->value);
}

std::string		Info::get_format(void)
{
	return (this->format);
}

void			Info::set_value(std::string value)
{
	this->value = value;
}

void			Info::set_info(int id, std::string name, std::string value,
								std::string format)
{
	this->id = id;
	this->name = name;
	this->value = value;
	this->format = format;
}
