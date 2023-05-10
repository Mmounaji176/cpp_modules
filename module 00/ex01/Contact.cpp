/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:14:01 by mmounaji          #+#    #+#             */
/*   Updated: 2023/05/10 14:46:05 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::print(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void	Contact::info(void)
{
	if (this->last_name.empty() || this->nickname.empty()||this->first_name.empty() )
        return ;
	std::cout << "|" << std::setw(10) << this->index;
	std::cout << "|" << std::setw(10) << this->print(this->first_name);
	std::cout << "|" << std::setw(10) << this->print(this->last_name);
	std::cout << "|" << std::setw(10) << this->print(this->nickname);
	std::cout << "|" << std::endl;
}

void	Contact::display_contact(void)
{
    if (this->last_name.empty() || this->nickname.empty()||this->first_name.empty() )
        return ;
    std::cout << "contact number"     << this->index << " :" << std::endl;
    std::cout << "First Name  : "   << this->first_name << std::endl;
    std::cout << "Last Name   : "   << this->last_name  << std::endl;
    std::cout << "Nickname    : "   << this->nickname   << std::endl;
	std::cout << "phone number: "   << this->phone_number   << std::endl;
    std::cout << std::endl;
}

std::string Contact::assign_data(std::string str)
{
	std::string		line = "xd";
	bool	done = false;
	while (!done)
	{
		std::cout << str << std::endl;
		std::cout << "=======> ";
		std::getline(std::cin, line);
		
		//std::cout << std::endl;
		if (line.empty())
			std::cout << "invalid input : try again" << std::endl;	
		else
			done = true;

	} 
	return (line);
}


void	Contact::set_data(int index)
{
	this->first_name = this->assign_data("enter your first name");
	this->last_name = this->assign_data("enter your last name");
	this->nickname = this->assign_data("enter your nickname");
	this->phone_number = this->assign_data("enter your phone number");
	this->darkest_secret = this->assign_data("enter your darkest secret");
	this->index = index;
}