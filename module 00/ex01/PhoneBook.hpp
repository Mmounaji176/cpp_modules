/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:49:14 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/10 17:16:42 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
	public:
		int		get_index();
		void	ADD(void);
		void	displayAll(void);
		void	SEARCH(void);
	
};

#endif