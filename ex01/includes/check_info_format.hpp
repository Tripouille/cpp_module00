/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_info_format.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:21:03 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:55:57 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_INFO_FORMAT_H
# define CHECK_INFO_FORMAT_H
# include <iostream>

int		is_all_alpha(std::string format);
int		is_sentence(std::string format);
int		is_all_alnum(std::string format);
int		is_address(std::string format);
int		is_mail(std::string format);
int		is_phone(std::string format);
int		is_date(std::string format);

#endif
