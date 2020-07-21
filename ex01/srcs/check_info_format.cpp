/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_info_format.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:19:30 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:57:07 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "check_info_format.hpp"
#include <stdlib.h>

static int		format_error(std::string info)
{
	std::cout << "Error your input contain invalid character(s):\n";
	std::cout << info << "\n";
	return (0);
}

static int		cinstr(std::string str, char c)
{
	int		i;

	i = -1;
	while (str[++i] && str[i] != c);
	return (str[i] == c ? 1 : 0);
}

int			is_all_alpha(std::string format)
{
	int		i;

	i = -1;
	while (format[++i])
		if (!isalpha(format[i]))
			return (format_error("Must contain only alpha."));
	return (1);
}

int			is_sentence(std::string format)
{
	int		i;

	i = -1;
	while (format[++i])
		if (!isalnum(format[i]) && format[i] != ' ' && format[i] != '\'')
			return (format_error("Must contain only alphanum or space or '."));
	return (1);
}

int			is_all_alnum(std::string format)
{
	int		i;

	i = -1;
	while (format[++i])
		if (!isalnum(format[i]))
			return (format_error("Must contain only alphanum."));
	return (1);
}

int			is_address(std::string format)
{
	int		i;

	i = -1;
	while (format[++i] && isdigit(format[i]));
	if (!i)
		return (format_error("Address must be like \"(n digit)(one space)(n alpha or space)\""));
	if (format[i] != ' ' || !format[i + 1] || format[i + 1] == ' ')
		return (format_error("Address must be like \"(n digit)(one space)(n alpha or space)\""));
	while (format[++i] && (isalnum(format[i]) || format[i] == ' ' || format[i] == '\''));
	if (format[i])
		return (format_error("Address must be like \"(n digit)(one space)(n alpha or space)\""));
	return (1);
}

int			is_mail(std::string format)
{
	int		i;

	i = -1;
	while (format[++i] && (isalnum(format[i]) || cinstr("._%+-", format[i])));
	if (!i)
		return (format_error("Mail must be like \"(n alphanum or ._%+-)(@)(n alphanum or -)(.)(n alpha)\""));
	if (format[i] != '@' || !format[i + 1])
		return (format_error("Mail must be like \"(n alphanum or ._%+-)(@)(n alphanum or -)(.)(n alpha)\""));
	while (format[++i] && (isalnum(format[i]) || format[i] == '-'));
	if (format[i] == '@')
		return (format_error("Mail must be like \"(n alphanum or ._%+-)(@)(n alphanum or -)(.)(n alpha)\""));
	if (format[i] != '.' || !format[i + 1])
		return (format_error("Mail must be like \"(n alphanum or ._%+-)(@)(n alphanum or -)(.)(n alpha)\""));
	while (format[++i] && isalpha(format[i]));
	if (format[i])
		return (format_error("Mail must be like \"(n alphanum or ._%+-)(@)(n alphanum or -)(.)(n alpha)\""));
	return (1);
}

int			is_phone(std::string format)
{
	int		i;

	i = -1;
	if (format.length() != 10)
		return (format_error("Phone must contain only 10 digit like 0123456789"));
	while (format[++i])
		if (!isdigit(format[i]))
			return (format_error("Phone must contain only 10 digit like 0123456789"));
	return (1);
}

int			is_date(std::string format)
{
	int		i;

	if (format.length() != 8)
		return (format_error("Must be like dd/mm/yy."));
	i = -1;
	while (format[++i])
		if (((i + 1) % 3 && !isdigit(format[i]))
		|| (!((i + 1) % 3) && format[i] != '/'))
			return (format_error("Must be like dd/mm/yy."));
	if (!atoi(format.substr(0, 2).c_str()) || atoi(format.substr(0, 2).c_str()) > 31)
		return (format_error("Day must be between 01 and 31."));
	else if (!atoi(format.substr(3, 2).c_str()) || atoi(format.substr(3, 2).c_str()) > 12)
		return (format_error("Month must be between 01 and 12."));
	return (1);
}
