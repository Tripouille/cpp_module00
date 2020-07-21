/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:55:09 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:56:18 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_SLOT 8
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact		contacts[MAX_SLOT];
		int			used_slot;
		void		print_info(int slot, std::string name);
		void		print_all_infos(int slot);
		int			info_is_valid(std::string format, std::string info);

	public:
		Phonebook(void);
		void		add(void);
		void		search(void);
};

#endif
