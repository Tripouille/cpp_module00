/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:43:44 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:56:05 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# define MAX_INFO 11
# include <iostream>
# include "Info.hpp"

class Contact
{
	private:
		Info			infos[MAX_INFO];

	public:
		Contact(void);
		std::string		get_info_value(std::string name);
		std::string		get_info_value(int i);
		std::string		get_info_format(int i);
		std::string		get_info_name(int i);

		void			set_info(int id, std::string value);
};

#endif
