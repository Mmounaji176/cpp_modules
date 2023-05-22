/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:31:25 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/10 14:55:04 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		PhoneBook::get_index(void)
{
	std::string     index;
	int x;
    bool    valid = false;
    do
    {
        std::cout << "Please enter the contact index: " << std::endl;
		std::cout << "====>";
        std::getline(std::cin, index);
        if (std::cin.eof())
            exit(1);
        if (std::cin.eof())
            break;
    	x = atoi(index.c_str());
		if (x >= 0 && x <= 8)
            valid = true;
		else {
            std::cout << "Invalid index : try again" << std::endl;
        }
    } while (!valid);
    return (x);
}
void	PhoneBook::displayAll(void)
{
	for (int i = 0; i < 8; i++)
		this->contact[i].info();
	std::cout << std::endl;
}

void	PhoneBook::ADD(void)
{
	static int index;
	this->contact[index % 8].set_data(index % 8);
	index++;
}

void    PhoneBook::SEARCH(void)
{
    int i = this->get_index();
    this->contact[i].display_contact();
}