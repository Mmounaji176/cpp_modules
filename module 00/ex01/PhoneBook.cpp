/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:31:25 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/08 18:36:40 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		PhoneBook::get_index(void)
{
	int     index;
    bool    valid = false;
    do
    {
        std::cout << "Please enter the contact index: " << std::endl;
		std::cout << "====>";
        std::cin >> index;
        if (index >= 0 && index <= 8)
            valid = true;
		else {
            std::cout << "Invalid index : try again" << std::endl;
            std::cin.clear();
        }
    } while (!valid);
    return (index);
}

void	PhoneBook::ADD(void)
{
	static int index;
	this->contact[index % 8].set_data(this->contact[index % 8].);
	index++;
}