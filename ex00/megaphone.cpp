/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 04:55:04 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/13 13:17:29 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*str_to_upper(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (*++av)
			std::cout << str_to_upper(*av);
	std::cout << "\n";
	return(0);
}
