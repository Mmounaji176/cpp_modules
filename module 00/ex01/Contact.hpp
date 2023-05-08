/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:32:01 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/08 18:39:23 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
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
	public:
		std::string		assign_data(std::string str);
		void			set_data(int index);
		void			display_contacts(void);
		void			display_contact(Contact contact);
};
#endif