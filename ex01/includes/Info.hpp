/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:07:00 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:56:13 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP
# include <iostream>

class Info
{
	private:
		int				id;
		std::string		name;
		std::string		value;
		std::string		format;

	public:
		int				get_id(void);
		std::string		get_name(void);
		std::string		get_value(void);
		std::string		get_format(void);

		void			set_value(std::string str);
		void			set_info(int id, std::string name, std::string value,
								std::string format);
};

#endif
