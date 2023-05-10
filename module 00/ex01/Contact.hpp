/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:32:01 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/10 17:15:58 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iomanip>
#include <iostream>

class Contact
{
	private:
		std::string 	first_name;
		std::string 	last_name;
		std::string 	nickname;
		std::string 	phone_number;
		std::string 	darkest_secret;
		int				index;
		std::string		assign_data(std::string str);
		std::string 	print(std::string str);
	public:
		void			set_data(int index);
		void			info(void);
		void			display_contact(void);
};
#endif